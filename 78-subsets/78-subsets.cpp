class Solution {
public:
   vector<vector<int>>res;
//     void f(int i,vector<int>&nums,vector<int>&path)
//     {
//         res.push_back(path);
//         for(int j=i;j<nums.size();j++)
//         {
//             path.push_back(nums[j]);
//             f(j+1,nums,path);
//             path.pop_back();
//         }
       
//     }
    vector<vector<int>> subsets(vector<int>& nums) {
       // vector<int>path;
      //  f(0,nums,path);
       // return res;
       // res.push_back({});
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {  vector<int>v;
            for(int j=0;j<n;j++)
            {
                if((i>>j)&1)
                    v.push_back(nums[j]);
            }
         res.push_back(v);
         v.clear();
        }
        return res;
    }
};