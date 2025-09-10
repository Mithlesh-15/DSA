class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int leftPointer = 0 , rightPointer = n-1;
        int maxWater = 0;
        while(leftPointer < rightPointer){
            int width = rightPointer - leftPointer;
            int currHeight = min(height[leftPointer],height[rightPointer]);
            int currWater = width * currHeight;
            maxWater = max(maxWater,currWater);
            height[leftPointer]<height[rightPointer]?leftPointer++:rightPointer--;
        }
        return maxWater;
    }
};
