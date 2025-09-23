class Solution {
public:
    int reverse(int x) {
        int reverseX =  0;
        while(x!=0){
            int dig = x%10;
            x /=10;
            reverseX = (reverseX*10)+dig;
        }
        return reverseX;
    }
};
