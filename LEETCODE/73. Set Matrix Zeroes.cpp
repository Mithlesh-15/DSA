class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        unordered_set<int> row;
        unordered_set<int> col;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[0].size(); j++) {
                if (nums[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for (auto it = row.begin(); it != row.end(); it++) {
            for (int i = 0; i < nums[0].size(); i++) {
                nums[*it][i] = 0;
            }
        }
        for (auto jt = col.begin(); jt != col.end(); jt++) {
            for (int j = 0; j < nums.size(); j++) {
                nums[j][*jt] = 0;
            }
        }
    }
};
