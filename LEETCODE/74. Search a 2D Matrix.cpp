class Solution {
public:
    bool searchInRow(vector<vector<int>>& matrix, int target,int midRow){
        int n = matrix[0].size();
       int start = 0,end=n-1;
       while(start <= end){
        int mid = start + (end-start)/2;
        if(matrix[midRow][mid] == target){
            return true;
        } else if(matrix[midRow][mid] > target){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
       }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
        int startRow=0,endRow=m-1;
        while(startRow <= endRow){
           int midRow = startRow + (endRow-startRow)/2;
            if(matrix[midRow][0]<= target && matrix[midRow][n-1]>= target){
                    return searchInRow(matrix,target,midRow);
            } else if(matrix[midRow][0] > target){
                
                endRow = midRow - 1;
            } else{
                startRow = midRow + 1;
            }
        }
        return false;
    }
};
