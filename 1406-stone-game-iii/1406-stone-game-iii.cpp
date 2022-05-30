class Solution {
public:
     int dp[50001][2];
    int solve(vector<int> &nums, int start, int turn)
    {
        if(start == nums.size())
            return 0;
        
        if(dp[start][turn]!=-1)
            return dp[start][turn];
        int ans1 = INT_MIN;
        int ans2 = INT_MAX;
        int temp =0;
        for(int i = start ; i< start+3 ;i++)
        {
            if(i<nums.size())
            {if(turn == 0 )
            {
                temp += nums[i];
                ans1 = max(ans1 , temp - solve(nums,i+1,0));
            }
            else
            {
                temp += nums[i];
                ans2 = min(ans2, temp - solve(nums,i+1,1));
            }}
            
        }
        return dp[start][turn] = turn ==0 ?ans1 : ans2;
    }
    string stoneGameIII(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        int alice = solve(nums,0,0);
        if(alice == 0)
            return "Tie";
        else if(alice > 0)
            return "Alice";
        else
            return "Bob";
    }
};