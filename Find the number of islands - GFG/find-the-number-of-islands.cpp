// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int n,m;
    // bool isSafe(int i,int j,vector<vector<int>>&visted)
    // {
    //     if(i>=0&&i<n&&j>=0&&j<m&&!visited[i][j])return true;
    //     return false;
    // }
    void dfs(vector<vector<char>>&grid,int i,int j)
    {   
        if(i < 0 || j < 0 || i >= n || j >= m) {
            return;
        }
        if(grid[i][j] == '0') { 
            return;
        }
        grid[i][j] = '0';           // Mark as visited;
        dfs(grid, i - 1, j);        // north
        dfs(grid, i - 1, j - 1);    // north - west
        dfs(grid, i - 1, j + 1);    // north - east
        dfs(grid, i, j - 1);        // west
        dfs(grid, i, j + 1);        // east
        dfs(grid, i + 1, j - 1);    // south - west
        dfs(grid, i + 1, j + 1);    // south - east
        dfs(grid, i + 1, j);  
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
         n=grid.size();m=grid[0].size();
      //  vector<vector<int>>visted(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++ )
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends