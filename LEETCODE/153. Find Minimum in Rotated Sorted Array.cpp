class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;
        if (nums[start] <= nums[end]) {
            return nums[start];
        }
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }
            if (nums[mid] <= nums[end]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    return -1;
    }
};
