class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1,m=0;
        while(l<h)
        {
            m=(h-l)/2+l;
            
         if(nums[m]<nums[m+1])l=m+1;
            else
                h=m;
                
        }
        return l;
        
    }
};