// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
   bool dfs(int V,int i, vector<int> adj[],vector<bool>&vis,int prev,bool cycle)
   {
      // if(i>V)return;
       vis[i]=true;
       
       for(auto &it:adj[i])
       {
          if(!vis[it])
          {if(dfs(V,it,adj,vis,i,cycle))return true;}
          else if(it!=prev)return true;
       }
       return false;
   }
    bool isCycle(int V, vector<int> adj[]) {
        // Code her
        bool cycle=false;
        vector<bool>vis(V,false);
        int prev=-1;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
           if( dfs(V,i,adj,vis,prev,cycle))return true;
            
        }
        
    return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends