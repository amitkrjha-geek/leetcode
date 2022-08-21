class Solution {
public:
    int res = 0;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                res = max(res, dfs(grid,i,j));
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& grid, int i, int j)
    {
        if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
            return 0;
        grid[i][j] = 0;
        int left = dfs(grid, i,j - 1);
        int right = dfs(grid, i,j + 1);
        int top = dfs(grid, i - 1, j);
        int bottom = dfs(grid, i + 1, j);
        return 1 + left + right + top + bottom;
    }
};