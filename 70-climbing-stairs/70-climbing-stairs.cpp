class Solution {
public:
    int climbStairs(int n) {
 //    vector<int>dp(n+1,0);
  //  dp[0] = 1;                                 
  //  dp[1] = 1;
        int a=1,b=1,c=0;
    for(int i=2;i<=n;i++){
       // dp[i] = dp[i-2] + dp[i-1]; 
        c=a+b;
        a=b;
        b=c;
    }
    return b;        
    }
};