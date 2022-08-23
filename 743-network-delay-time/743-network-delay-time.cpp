class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<int>dist(n+1,INT_MAX);
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,k});
        dist[k]=0;
        while(!q.empty())
        {
            int prev=q.top().second;
            q.pop();
            for(pair<int,int>it:adj[prev])
            {
                int nextdis=it.second;
                int next=it.first;
                if(dist[next]>dist[prev]+nextdis)
                {
                    dist[next]=dist[prev]+nextdis;
                    q.push({dist[next],next});
                }
            }
        }
        int res=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            if(i!=k&&dist[i]==INT_MAX)return -1;
            else res=max(res,dist[i]);
        }
        return res;
    }
};