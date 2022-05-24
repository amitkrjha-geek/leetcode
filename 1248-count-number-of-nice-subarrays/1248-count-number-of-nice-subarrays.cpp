class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)nums[i]=1;
            else nums[i]=0;
                
        }
        vector<int>psum(nums.size());
        psum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            psum[i]+=nums[i]+psum[i-1];
        }
        map<int,int>m;
        int ans=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            if(psum[i]-k>=0)
                ans+=m[psum[i]-k];
            m[psum[i]]++;
        }
        return ans;
        
    }
};