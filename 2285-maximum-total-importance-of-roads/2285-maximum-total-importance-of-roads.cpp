class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>f(n);
        for(int i=0;i<roads.size();i++)
        {
            f[roads[i][0]]++;
            f[roads[i][1]]++;
        }
        sort(f.begin(),f.end());
        long long ans=0;
        for(int i=0;i<f.size();i++)
        {
            ans+=1ll*(1+i)*f[i];
        }
        return ans;
    }
};