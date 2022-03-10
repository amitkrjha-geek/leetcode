class Solution {
public:
    int dp[10000];
    int topdown(int n)
    {
        if(n==0)return 1;
        if(n<0)return 0;
        
        if(dp[n]!=0)return dp[n];
        dp[n]=topdown(n-1)+topdown(n-2);
        return dp[n];
        
    }
    int climbStairs(int n) {
        memset(dp,0,sizeof(dp));
        return topdown(n);
    }
};