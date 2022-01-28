class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>lis(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
           lis[i]=1;
            for(int j=0;j<i;j++)
            {  if(nums[i]>nums[j])
                lis[i]=max(lis[i],1+lis[j]);
            }
            ans=max(lis[i],ans);
        
        }
        return ans;
    }
};