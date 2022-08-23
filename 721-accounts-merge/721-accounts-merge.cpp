class Solution {
public:
  
    vector<int> parent, size;
    int find_set(int v)
    {
        if(v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_set(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if(a == b) return;
        if(size[a] < size[b])
        {
            parent[a] = b;
            size[b] += size[a];
        }
        else
        {
            parent[b] = a;
            size[a] += size[b];
        }
        return;
    }
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        unordered_map<string, int> um;
        int i = 0;
        for(vector<string> &vec : accounts)
        {
            parent.push_back(i);
            size.push_back(1);
            for(int j = 1; j < vec.size(); j++)
            {
                if(um.count(vec[j]))
                    union_set(i, um[vec[j]]);
                else
                    um[vec[j]] = i;
            }
            i++;
        }
        unordered_map<int, set<string>> us;  
        for(int i = 0; i < n; i++)
        {
            int val = find_set(i);
            for(int j = 1; j < accounts[i].size(); j++)
            {
                us[val].insert(accounts[i][j]);
            }
        }
        vector<vector<string>> ans;
        for(auto &[fst, snd] : us)
        {
            vector<string> tmp;
            tmp.push_back(accounts[fst][0]);
            for(string s : snd)
                tmp.push_back(s);
            ans.push_back(tmp);
        }
        return ans;
    }

};