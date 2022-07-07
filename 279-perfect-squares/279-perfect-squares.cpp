class Solution {
public:
    int memo(int n,vector<int>&dp)
    {
        if(n==0){
            return 0;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int mini=INT_MAX;
        for(int i=1;i*i<=n;i++){
            int ans=memo(n-i*i,dp);
            mini=min(1+ans,mini);
        }
        
        return dp[n]=mini;
    }
    int numSquares(int n) {
       // vector<int>sq;
        //for(int i=1;i*i<n;i++)
           // sq.push_back(i*i);
        vector<int>dp(n+1,-1);
        return memo(n,dp);
        
        
    }
};