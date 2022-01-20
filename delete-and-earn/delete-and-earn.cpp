class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
         int m = *max_element(nums.begin(), nums.end());
        int n=nums.size();
        if (n==1)   return nums[0];
        vector<int> s(m+1,0), dp(m+1,0);
        for(int i=0; i<n;i++){
            s[nums[i]]++;
        }
        dp[0]=0; dp[1]=s[1];
        for(int i=2; i<=m;i++){
            dp[i]=max(dp[i-1], dp[i-2]+s[i]*i);
        }
        return dp[m];
    }
};