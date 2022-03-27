class Solution {
public:
    int findMin(vector<int>& nums) {
        int a=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])a=nums[i];
        }
        return a;
    }
};