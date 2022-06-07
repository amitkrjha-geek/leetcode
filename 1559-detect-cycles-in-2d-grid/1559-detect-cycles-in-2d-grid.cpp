class Solution {
public:
    
    bool bfs(vector<vector<char>>& grid, int r, int c, vector<vector<bool>> &v,char curr){
        
        queue<pair<int,int>> q;
        
        q.push({r,c});
        
        int n = grid.size();
        
        int m = grid[0].size();
        
        while(!q.empty()){
            
            pair<int,int> rem = q.front();
            q.pop();
            
            r = rem.first;
            c = rem.second;
            
            if(v[r][c] == true)
                return true;
            
            v[r][c] = true;
            
            if(r-1>=0 && grid[r-1][c] == curr && !v[r-1][c])
                q.push({r-1,c});
            
            if(r+1<n && grid[r+1][c] == curr && !v[r+1][c])
                q.push({r+1,c});
            
            if(c-1>=0 && grid[r][c-1] == curr && !v[r][c-1])
                q.push({r,c-1});
            
            if(c+1<m && grid[r][c+1] == curr && !v[r][c+1])
                q.push({r,c+1});
            
        }
            
        return false;
    }
    
    bool containsCycle(vector<vector<char>>& grid) {
        
        int n = grid.size();
        
        int m = grid[0].size();
        vector<vector<bool>> v(n, vector<bool>(m, false));
        
        for(int i = 0 ; i < grid.size() ; i++){
            
            for(int j = 0 ; j < grid[0].size() ; j++){
                
                if(!v[i][j] && bfs(grid, i, j, v, grid[i][j]) )
                    return true;
                
            }
            
        }
        
        return false;
    }
};