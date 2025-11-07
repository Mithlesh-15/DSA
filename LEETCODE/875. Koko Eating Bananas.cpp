class Solution {
public:
    bool canEatAllOnTime(vector<int> piles, int h, int k) {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHours += (piles[i] + k - 1) / k;
        }
        return h >= totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (canEatAllOnTime(piles, h, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};
