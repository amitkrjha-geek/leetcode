class Solution {
public:
  
   map<string, vector<string>> graph;
unordered_set<string> visited;
vector<vector<string>> res;

void dfs(string source, vector<string>& temp)
{
    visited.insert(source);
    
    temp.push_back(source);
    
    for(auto x: graph[source])
    {
        if(!visited.count(x))
        {
            dfs(x,temp);
        }
    }
}

vector<vector<string>> accountsMerge(vector<vector<string>>& accounts)    {
    
    
    for(auto list : accounts)
    {
        for(int i=1; i<list.size(); i++)
        {
            graph[list[1]].push_back(list[i]);
            graph[list[i]].push_back(list[1]);
        }
    }
    
    for(auto list : accounts)
    {
        vector<string> temp;
        
        if(!visited.count(list[1]))
        {
            dfs(list[1], temp);
            
            sort(temp.begin(), temp.end());
            
            temp.insert(temp.begin(), list[0]);
            
            res.push_back(temp);
        }
    }
    
    return res;
}
};