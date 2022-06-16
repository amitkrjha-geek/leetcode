class Solution {
public:
    int total = 0;
    int solve(vector<int>& nums,int sum,int target,int begin,vector<vector<int>> &dp)
    {
        if(begin==nums.size() && target == sum)
            return 1;
        else if(begin==nums.size())
            return 0;
        if(dp[begin][sum+total]!=-1)
            return dp[begin][sum+total];
        int result = solve(nums,sum-nums[begin],target,begin+1,dp) +
            solve(nums,sum+nums[begin],target,begin+1,dp);
        return dp[begin][sum+total]=result;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n =  nums.size();
        for(auto num:nums) total+=num;
        vector<vector<int>> dp(n+1,vector<int>(2*total+1,-1));
        return solve(nums,0,target,0,dp);
    }
};