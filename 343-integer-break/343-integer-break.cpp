class Solution {
public:
    int helper(int n,vector<long long>&dp)
    {
           if(n==0 || n==1)
            return 1;
        
        if(dp[n]!=-1) 
            return dp[n];
        
        int maxi=0;
        
        for(int i=1;i<n;i++){
            maxi=max(maxi,max(helper(n-i,dp)*i,i*(n-i)));
        }
        
        return dp[n]=maxi;
    }
        
    int integerBreak(int n) {
           vector<long long>dp(n+1,-1);
       return helper(n,dp);
     
 
    }
};