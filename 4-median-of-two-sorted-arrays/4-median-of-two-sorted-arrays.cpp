class Solution {
public:
   
       double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       if(nums1.size()>nums2.size())
          return findMedianSortedArrays(nums2, nums1);
        
        int x= nums1.size();
        int y= nums2.size();
        
        int low=0;
        int high= x;
        
        while(low<=high)
        {
            int partionX= (low+high)/2;
            int partionY = (x+y+1)/2 - partionX;
            
            int maxLeftX = (partionX==0)? INT_MIN: nums1[partionX-1];
            int minRightX= (partionX==x)? INT_MAX: nums1[partionX];
            
            int maxLeftY = (partionY==0)? INT_MIN : nums2[partionY-1];
            int minRightY = (partionY==y) ? INT_MAX : nums2[partionY];
            
            if(maxLeftX<=minRightY && maxLeftY<= minRightX)
            {
                if((x+y)%2==0)
                    return ((double) max(maxLeftX , maxLeftY) + min (minRightX, minRightY))/2;
                else
                    return (double) max(maxLeftX, maxLeftY);
                
            }
            else if(maxLeftX> minRightY)
                    high = partionX - 1;
            else
                low= partionX +1;
            }
        return -1.00000;
    }
        
    
};