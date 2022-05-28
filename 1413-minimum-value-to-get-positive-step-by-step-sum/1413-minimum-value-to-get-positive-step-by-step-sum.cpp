class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int>prefixsum(nums.size());
        prefixsum[0]=nums[0];
        int a=prefixsum[0];
        for(int i=1;i<nums.size();i++)
        {
            prefixsum[i]=prefixsum[i-1]+nums[i];
            a=min(a,prefixsum[i]);
        }
        if(a<1)
            return 1-(a);
        return 1;
    }
};