class Solution {
public:
   int dp[1000][1000];

int answer_dp(vector<int> &nums, vector<int> &multi, int i, int l, int r){

	if(i==multi.size())
		return 0;

	if(dp[l][i]!=-1)
		return dp[l][i];

	int first = multi[i]*nums[l] + answer_dp(nums, multi, i+1, l+1, r);
	int last = multi[i]*nums[r] + answer_dp(nums, multi, i+1, l, r-1);

	dp[l][i] = max(first, last);

	return dp[l][i];
}
int maximumScore(vector<int>& nums, vector<int>& multi) {

	memset(dp, -1, sizeof(dp));

	return answer_dp(nums, multi, 0, 0, nums.size()-1);
}
};