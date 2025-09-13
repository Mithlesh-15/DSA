class Solution
{
public:
    int search(vector<int> &nums, int tar)
    {
        int start = 0, end = nums.size() - 1;
        int mid;
        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (nums[mid] == tar)
            {
                return mid;
            }
            if (nums[start] <= nums[mid])
            {
                if (nums[start] <= tar && tar <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if (nums[mid] <= tar && tar <= nums[end])
                {

                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
