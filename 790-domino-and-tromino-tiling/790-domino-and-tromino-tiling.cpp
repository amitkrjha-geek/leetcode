class Solution {
public:
   #define MOD 1000000007
    int helper(int n, vector<int>& dp) {
        if (n <= 0)
            return 0;
        
        if (n == 1)
            return 1;
        
        if (n == 3)
            return 5;
        
        if (dp[n] != -1)
            return dp[n];
        dp[n] = (2*helper(n-1, dp) % MOD + helper(n-3, dp)) % MOD;
        return dp[n];
    }
    
    int numTilings(int n) {
        vector<int>dp(n + 1, -1);
        return helper(n, dp);   
    }

};