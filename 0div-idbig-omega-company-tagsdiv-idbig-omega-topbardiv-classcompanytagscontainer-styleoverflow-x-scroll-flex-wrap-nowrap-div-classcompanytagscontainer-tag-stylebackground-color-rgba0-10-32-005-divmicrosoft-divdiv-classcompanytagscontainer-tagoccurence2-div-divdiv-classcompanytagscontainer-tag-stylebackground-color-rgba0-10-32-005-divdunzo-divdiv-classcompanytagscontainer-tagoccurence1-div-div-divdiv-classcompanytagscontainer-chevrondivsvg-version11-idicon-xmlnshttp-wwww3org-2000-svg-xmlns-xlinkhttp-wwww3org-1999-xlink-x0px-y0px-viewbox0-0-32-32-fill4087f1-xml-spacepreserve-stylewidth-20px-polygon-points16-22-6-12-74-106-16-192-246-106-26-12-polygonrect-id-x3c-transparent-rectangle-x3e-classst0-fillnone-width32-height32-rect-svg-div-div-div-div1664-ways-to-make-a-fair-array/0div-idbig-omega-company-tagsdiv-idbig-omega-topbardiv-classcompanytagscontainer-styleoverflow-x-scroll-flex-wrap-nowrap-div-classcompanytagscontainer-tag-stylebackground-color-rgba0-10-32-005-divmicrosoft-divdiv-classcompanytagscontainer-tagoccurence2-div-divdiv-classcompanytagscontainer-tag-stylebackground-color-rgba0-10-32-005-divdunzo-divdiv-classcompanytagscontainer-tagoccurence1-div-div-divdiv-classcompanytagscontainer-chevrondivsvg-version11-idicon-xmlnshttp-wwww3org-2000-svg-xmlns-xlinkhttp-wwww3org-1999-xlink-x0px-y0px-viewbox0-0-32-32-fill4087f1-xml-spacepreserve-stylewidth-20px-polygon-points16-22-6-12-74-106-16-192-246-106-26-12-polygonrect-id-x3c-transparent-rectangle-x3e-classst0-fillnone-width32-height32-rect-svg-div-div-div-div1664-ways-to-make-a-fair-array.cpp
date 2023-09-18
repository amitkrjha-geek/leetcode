class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int o=0,e=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                e+=nums[i];
            }
            else if(i%2!=0)
            {
                o+=nums[i];
            }
        }
        int count=0;
        int evensum=0,oddsum=0;
        for(int i=0;i<n;i++)
        {            
            int os=(i%2==0)?oddsum+e-evensum-nums[i]:oddsum+e-evensum;
            int es=(i%2!=0)?evensum+o-oddsum-nums[i]:evensum+o-oddsum;

            if(os==es)count++;
            if(i%2==0)
            {
                evensum+=nums[i];
            }
            else if(i%2!=0)
            {
                oddsum+=nums[i];
            }
        }
        return count;
    }
};