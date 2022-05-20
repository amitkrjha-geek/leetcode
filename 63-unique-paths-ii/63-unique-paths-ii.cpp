                   class Solution {
public:
          int path(vector<vector<int>>& obstacleGrid, int m, int n, int a, int b,vector<vector<int>>&dp)
    {
        if (a < 0 || a >= m || b < 0 || b >= n || obstacleGrid[a][b] == 1) {
            return 0;
        }
            else  if(dp[a][b]!=0)return dp[a][b];
       else if (a == m-1 && b == n-1) {
            return 1;
        }
              else
      dp[a][b]=path(obstacleGrid, m, n, a+1, b,dp) + path(obstacleGrid, m, n, a, b+1,dp);
              return dp[a][b];
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1));
        

        int totalPaths = path(obstacleGrid, m, n, 0, 0,dp);
        return totalPaths;
    }
    
};