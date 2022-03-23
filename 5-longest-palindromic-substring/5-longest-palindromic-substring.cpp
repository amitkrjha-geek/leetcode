class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<bool>> dp(n+1,vector<bool>(n+1, false));
        pair<int, int> ans = {0,0};
        for(int len=1; len<=n; len++){
            for(int start=0; start<n; start++){
                int end = start + len - 1;
                if(end >= n) break;
                if(s[start] == s[end] && (end-start<2 || dp[start+1][end-1])){
                    dp[start][end] = true;
                    if(ans.second-ans.first<end-start) ans = make_pair(start, end);
                }
            }
        }
        return s.substr(ans.first, ans.second-ans.first+1);
    }
};