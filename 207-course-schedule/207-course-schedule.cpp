class Solution {
public:
    bool canFinish(int n, vector<vector<int>>&v) {
        
   if(n==0) return true;
        if(v.size()==0) 
        {
           return  true;
        }
        
        vector<int> adj[n];
        //vector<vector<int>> adj(n);
        vector<int> ind(n,0);
        for(int i=0;i<v.size();i++)
        {
            adj[v[i][1]].push_back(v[i][0]);
            ind[v[i][0]]++;
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(ind[i]==0)
                q.push(i);
        
        if(q.empty()) return false;
        while(!q.empty())
        {
            ans.push_back(q.front());
            int no=q.front();
            q.pop();
            for(int i=0; i<adj[no].size(); i++)
            {
                ind[adj[no][i]]--;
                if(ind[adj[no][i]]==0)
                    q.push(adj[no][i]);
            }
        }
        if(ans.size()!=n) return false;
        return true;}
}; 
    