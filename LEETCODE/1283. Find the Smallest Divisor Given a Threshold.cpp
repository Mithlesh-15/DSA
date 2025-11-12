class Solution {
public:
    int findSum(vector<int>& nums, int divisor) {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] + divisor - 1) / divisor;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        while (start < end) {
            int mid = start + (end - start) / 2;
            long long sum = findSum(nums, mid);
            cout << start << mid << end << "  " << sum << endl;
            if (sum <= threshold)
                end = mid;
            else
                start = mid + 1;
        }
        return start;
    }
};
