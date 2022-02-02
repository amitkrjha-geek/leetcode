class Solution {
public:
     int dp[1001][1001];
    int minDist(string &a, string &b, int i, int j) {
         if (i == -1) {
            return j + 1;
        }
        if (j == -1) {
            return i + 1;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (a[i] == b[j]) {
            dp[i][j] =  minDist(a, b, i - 1, j - 1);
            return dp[i][j];
        }
        else {
            int add = minDist(a, b, i, j - 1);
            int replace = minDist(a, b, i - 1, j - 1);
            int remove = minDist(a, b, i - 1, j);
            
            dp[i][j] =  1 + min(min(add, replace), remove);
            return dp[i][j];
        }
    }

    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        
        return minDist(word1,word2,word1.size()-1,word2.size()-1);
    }
};