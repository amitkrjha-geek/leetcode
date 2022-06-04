class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
      int n=nums.size();
        int prev=nums[0]; 
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            ans=max(ans,prev+nums[i]-i); 
            prev=max(prev,nums[i]+i); 
        }
        return ans;
    }
};