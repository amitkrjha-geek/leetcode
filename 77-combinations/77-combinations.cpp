class Solution {
public:
    vector<vector<int>>v;
    void r(vector<int>&path,int n,int i,int k)
    {
        if(k==path.size())
        {
            v.push_back(path);
            return;
        }
        else
            for(int j=i;j<=n;j++)
            {
                path.push_back(j);
                r(path,n,j+1,k);
                path.pop_back();
            }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>path;
        r(path,n,1,k);
        return v;
    }
};