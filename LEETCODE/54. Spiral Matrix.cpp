class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0,startCol = 0,endRow = m-1,endCol = n-1;
        vector<int> ans;
        while(startRow <= endRow && startCol <= endCol){
            // top
            for(int i = startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
            }
            //right
            for(int i = startRow+1;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
            }
            //bottom
            for(int i = endCol-1;i>=startCol;i--){
                if(endRow == startRow) break;
                ans.push_back(matrix[endRow][i]);
            }
            // left
            for(int i = endRow-1;i>=startRow+1;i--){
                if(endCol == startCol) break;
                ans.push_back(matrix[i][startCol]);
            }
            startRow++;startCol++;endRow--;endCol--;
        }
        return ans;
    }
};
