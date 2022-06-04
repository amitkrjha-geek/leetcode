class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int res = 0;
        queue<pair<int,int>> q;
        
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid.size(); j++)
                if (grid[i][j] == 1)
                    q.push({i,j});
            
        while(!q.empty()){
            pair<int,int> curr= q.front();
            q.pop();
            
            vector<pair<int,int>> dirs {{0,1},{0,-1},{1,0},{-1,0}};
            
            for (auto dir : dirs){
                int i = curr.first + dir.first;
                int j = curr.second + dir.second;
                
                
                if (i >= 0 && i < grid.size() && j >= 0 && j < grid.size() && grid[i][j] == 0){
                    grid[i][j] = grid[curr.first][curr.second] + 1;
                    q.push({i,j});
                    res = max(res,grid[i][j]);
                }
            }

        }
        
        return res-1 ;        
    }
};