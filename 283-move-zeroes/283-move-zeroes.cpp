class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size()-1;
        int l=0,i=0,c=0;
        while(i<=n)
        {
            if(nums[i]!=0)nums[l++]=nums[i];
            else c++;
            i++;
        }
        while(c)
        {
            nums[l++]=0;
            c--;
        }
    }
};