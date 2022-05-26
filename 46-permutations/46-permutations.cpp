class Solution {
public:
  vector<vector<int>>result;
    vector<int>s;
    void p(vector<int>&nums,int j,int n)
    {
        if(j==n)
        {
            result.push_back(nums);
        }
        for(int i=j;i<=n;i++)
        {
            swap(nums[i],nums[j]);
            p(nums,j+1,n);
          swap(nums[i],nums[j]);

        }
            
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size()-1;
        p(nums,0,n);
        return result;
    }

};