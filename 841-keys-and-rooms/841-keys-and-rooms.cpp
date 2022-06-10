class Solution {
public:
    void dfs(vector<vector<int>>&rooms,int i,vector<bool>&v)
    {
        if(v[i]==true)return;
        v[i]=true;
        for(int j=0;j<rooms[i].size();j++)
        {
            dfs(rooms,rooms[i][j],v);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // vector<vector<int>>adj(room.size());
        // for(int i=0;i<rooms.size();i++)
        // {
        //     for(int j=0;j<room[i].size();j++)
        //     {
        //         adj[i].push_back(room[i][j]);
        //     }
        // 
        vector<bool>v(rooms.size(),false);
      //  for(int i=0;i<rooms.size();i++)
       // {
            dfs(rooms,0,v);
       // }
        for(int i=0;i<rooms.size();i++)
        {
            if(v[i]==false)return false;
        }
        return true;
    }
};