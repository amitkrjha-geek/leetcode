class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& v) {
   if(n==0) return vector<int>();
        if(v.size()==0) 
        {
            vector<int> ans(n);
            for(int i=0;i<n;i++) ans[i]=i;
            return ans;
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
        
        if(q.empty()) return vector<int>();
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
        if(ans.size()!=n) return vector<int>();
        return ans;}
};