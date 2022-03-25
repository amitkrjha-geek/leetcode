class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //application of lower bound
        int h=nums.size()-1,l=0,m=0;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(nums[m]<target)
                l=m+1;
            else
                h=m-1;
        }
        return l;
        
    }
};