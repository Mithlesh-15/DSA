class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
    int count = 0;
    for(int x : nums){
        if(x != 1){
            count = 0;
        } else {
            count++;
            maxCount = max(maxCount,count);
        }
    }
    return maxCount;
    }
};
