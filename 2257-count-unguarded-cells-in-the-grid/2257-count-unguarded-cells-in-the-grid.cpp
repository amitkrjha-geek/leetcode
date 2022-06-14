class Solution {
public:
    void dfs(int x,int y,vector<vector<int>>&grid,int dir,int m,int n)
    {
        if(x<0 or y<0 or x>=m or y>=n)
            return;
        if(grid[x][y]==2 or grid[x][y]==1)
            return;
        grid[x][y]=3;
        
        if(dir==1)
            dfs(x+1,y,grid,dir,m,n);
        else if(dir==2)
            dfs(x,y+1,grid,2,m,n);
        else if(dir==3)
            dfs(x-1,y,grid,3,m,n);
        else
            dfs(x,y-1,grid,4,m,n);
            
            
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        vector<vector<int>>grid(m,vector<int>(n,0));
        
        int i,j;
        for(auto i:guards)
        {
            grid[i[0]][i[1]]=1;
        }
        for(auto i:walls)
        {
            grid[i[0]][i[1]]=2;
        }
        
        for(auto i:guards)
        {
            int x=i[0];
            int y=i[1];
            dfs(x+1,y,grid,1,m,n);
            dfs(x,y+1,grid,2,m,n);
            dfs(x-1,y,grid,3,m,n);
            dfs(x,y-1,grid,4,m,n);
            
        }
        int count=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                    count++;
            }
        }
        return count;
        
    }

};