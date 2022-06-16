class Solution {
public:
    int helper(vector<int>&a,int t,vector<int>&dp)
    {
        if(t==0)return 1;
        if(t<0)return 0;
        if(dp[t]!=-1)return dp[t];
        int ans=0;
        for(int n:a)
        {
            if(n<=t)
            {
                ans+=helper(a,t-n,dp);
            }
        }
        return dp[t]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
       return helper(nums,target,dp);
    }
};