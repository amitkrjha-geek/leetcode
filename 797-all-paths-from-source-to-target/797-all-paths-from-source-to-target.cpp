class Solution {
public:
    vector<vector<int>>res;
    int n;
    void dfs(vector<vector<int>>& graph,int source,vector<int>temp)
    {
        if(source==n)
        {
            temp.push_back(n);
            res.push_back(temp);
            return;
        }
        else temp.push_back(source);
        for(auto it:graph[source])
        {
            dfs(graph,it,temp);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n=graph.size()-1;
        vector<int>temp;
        dfs(graph,0,temp);
        return res;
    }
};