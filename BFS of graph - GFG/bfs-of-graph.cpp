// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       vector<bool> vis(V, false);
        int s = 0;

        // initially we mark first vertex as visited(true).
        vis[s] = true;

        vector<int> res;

        // creating a queue for BFS and pushing first vertex in queue.
        queue<int> q;
        q.push(s);

        while (!q.empty()) {
            // adding front element in output list and popping it from queue.
            int t = q.front();
            res.push_back(t);
            q.pop();

            // traversing over all the connected components of front element.
            for (int v : adj[t]) {
                // if they aren't visited, we mark them visited and add to
                // queue.
                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        // returning the output list.
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends