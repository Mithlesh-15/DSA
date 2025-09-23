class Solution {
public:
    int reverse(int x) {
        int reverseX =  0;
        while(x!=0){
            int dig = x%10;
            if(INT_MAX/10 < reverseX || INT_MIN/10 > reverseX){
                return 0;
            }
            reverseX = (reverseX*10)+dig;
            x /=10;
        }
        return reverseX;
    }
};
