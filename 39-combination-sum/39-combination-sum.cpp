class Solution {
public:
    vector<vector<int>>v;
    void f(vector<int>&canditates,int i,vector<int>&path,int target)
    {
        if(target==0)v.push_back(path);
        if(target<0)return;
        for(int j=i;j<canditates.size();j++)
        {
            path.push_back(canditates[j]);
           //f(canditates,j,path,target-canditates[j]);
             f(canditates,j,path,target-canditates[j]);
            path.pop_back();

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>path;
        f(candidates,0,path,target);
        return v;
    }
};