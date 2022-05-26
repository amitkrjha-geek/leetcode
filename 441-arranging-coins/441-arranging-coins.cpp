class Solution {
public:
    int arrangeCoins(int n) {
        int j=1,c=0;
        if(n==1)return 1;
        while(n>=0)
        {
           n=n-j;
            j++;
            if(n>=0)
            c++;
        }
        
        return c;
    }
};