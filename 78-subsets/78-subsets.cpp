class Solution {
public:
    vector<vector<int>>res;
    void f(int i,vector<int>&nums,vector<int>&path)
    {
        res.push_back(path);
        for(int j=i;j<nums.size();j++)
        {
            path.push_back(nums[j]);
            f(j+1,nums,path);
            path.pop_back();
        }
       
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>path;
        f(0,nums,path);
        return res;
    }
};