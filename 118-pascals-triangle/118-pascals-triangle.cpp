class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      int dp[31][31];
		memset(dp, 0, sizeof dp);

		for(int i=0; i<numRows; i++) {
			dp[i][0] = 1;
			dp[i][i] = 1;
		}

		for(int i=2; i<numRows; i++) {
			for(int j=1; j<numRows; j++) {
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
			}
		}

		vector<vector<int>> ans;

		for(int i=0; i<numRows; i++) {
			vector<int> tmp;
			for(int j=0; j<i+1; j++) {
				tmp.push_back(dp[i][j]);
			}

			ans.push_back(tmp);
		}

		return ans;
 
    }
};