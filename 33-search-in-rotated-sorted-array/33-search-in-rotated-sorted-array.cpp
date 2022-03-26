class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=nums.size()-1,m=0;
        while(l<=h)
        {
            m=(h-l)/2+l;
            if(nums[m]==target)return m;
            if(nums[m]>=nums[l])
            {
               if(target>=nums[l]&&target<=nums[m])h=m-1;
                else l=m+1;
                 
            }
            else
            {
                if(target<=nums[h]&&target>=nums[m])l=m+1;
                else h=m-1;
            }
        }
        return -1;
    }
};