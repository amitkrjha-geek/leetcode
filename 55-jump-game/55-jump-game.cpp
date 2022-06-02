class Solution {
public:
   bool help(vector<int> &dp, int i, vector<int> &nums) {
        if (dp[i] != -1) return dp[i];
        int ans = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (i - j <= nums[j]) {
                ans = help(dp, j, nums);
                if (ans == 1) return dp[i] = ans;
            }
        }
        return dp[i] = 0;
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = 1;
        return help(dp, n - 1, nums);
    }
};