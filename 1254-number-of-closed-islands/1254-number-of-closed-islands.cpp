class Solution {
public:
    int n,m;
    void dfs(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0||j<0||i>=m||j>=n||grid[i][j])return;
        if(grid[i][j]==0)grid[i][j]=1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {
              if(i==0||j==0||i==m-1||j==n-1)
                  dfs(grid,i,j);
          }
        }
                    int count=0;

         for(int i=0;i<m;i++)
        {
          for(int j=0;j<n;j++)
          {         if(grid[i][j]==0)
          { dfs(grid,i,j);
           count++;
          }
          }
         }
        return count;
    }
};