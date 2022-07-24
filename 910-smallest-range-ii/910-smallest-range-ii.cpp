class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int s = nums.size();
        int ans = nums[s-1]-nums[0];
        for(int i=1;i<s;i++)
        {
            int newmin = min(nums[0]+k,nums[i]-k);
            int newmax = max(nums[s-1]-k,nums[i-1]+k);
            
            ans = min(ans,newmax-newmin);
        }
        return ans;
    }
        

};