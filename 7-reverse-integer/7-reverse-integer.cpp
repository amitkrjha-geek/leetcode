class Solution {
public:
    int reverse(int x) {
        int n = 0, r = 0;
        while(x!=0){
            r = x%10;
            
            if((INT_MIN/10) >n||n > (INT_MAX/10)){
                return 0;
            }
            n = r + (10*n);
            x = x/10;
        }
        return n;
    }
};