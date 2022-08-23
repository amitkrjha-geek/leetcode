class Solution {
public:
   int countPaths(int n, vector<vector<int>>& roads) {
		int MOD=1e9+7;
		vector<long long>dist(n,LONG_MAX);
		vector<int>path(n,0);

		vector<pair<int,int>>adjList[n];
		priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>minHeap;

		for(auto x:roads){
			adjList[x[0]].push_back({x[1],x[2]});
			adjList[x[1]].push_back({x[0],x[2]});
		}

		dist[0]=0;
		path[0]=1;  
		minHeap.push({0,0});

		while(!minHeap.empty()){
			auto cur=minHeap.top();
			minHeap.pop();

			int node=cur.second;
			long long dst=cur.first;


			for(auto x:adjList[node]){

				if(dst+x.second<dist[x.first]){
					dist[x.first]=dst+x.second;
					minHeap.push({dist[x.first],x.first});

					//Path from node --> x.first
					path[x.first]=path[node];
				}

				else if(dst+x.second==dist[x.first]){
					path[x.first]=(path[x.first]%MOD+path[node]%MOD)%MOD;
				}

			}
		}



		return path.back();
	}
};
