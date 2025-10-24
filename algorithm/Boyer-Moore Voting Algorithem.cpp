// Boyer-Moore Voting Algorithem



// 169. Majority Element I - LeetCode
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;
        int ans = nums[0];
        for(int i=0 ;i<nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
            
        }
        return ans;
    }
};




// 229. Majority Element II - LeetCode
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int maj1 = NULL;
        int count2 = 0;
        int maj2 = NULL;
        for (int i = 0; i < n; i++) {
            if (nums[i] == maj1) {
                count1++;
            } else if (nums[i] == maj2) {
                count2++;
            } else if (count1 == 0) {
                maj1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                maj2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        // for verify
        vector<int> result;
        int freq1 = 0, freq2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == maj1) {
                freq1++;
            }
            if (nums[i] == maj2) {
                freq2++;
            }
        }
        if(maj1 == maj2){
            result.push_back(maj1);
            return result;
        }
        if (freq1 > n / 3) {
            result.push_back(maj1);
        }
        if (freq2 > n / 3) {
            result.push_back(maj2);
        }
        return result;
    }
};
