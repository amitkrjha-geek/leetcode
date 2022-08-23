class Solution {
public:

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
          vector<pair<int, double>> adj[n];
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back({v, succProb[i]});
            adj[v].push_back({u, succProb[i]});
        }
        vector<double> dis(n, 0);
        priority_queue<pair<double, int>> pq;
        dis[start] = 1.0;
        pq.push({dis[start], start});
        while(!pq.empty()) {
            int src = pq.top().second;
            double dis_to_src = pq.top().first;
            pq.pop();
            for(auto child : adj[src]) {
                int neigh = child.first;
                double wt = child.second;
                if(dis_to_src * wt > dis[neigh]) {
                    dis[neigh] = dis_to_src * wt;
                    pq.push({dis[neigh], neigh});
                }
            }
        }
        return dis[end];
    }
};