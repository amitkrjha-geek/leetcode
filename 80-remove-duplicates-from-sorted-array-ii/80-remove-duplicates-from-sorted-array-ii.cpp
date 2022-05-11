class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
        int i=1,j=1,cnt=1;
        for(;i<n;++i)
        {
            if(nums[i]!=nums[i-1])
            {
                cnt=1;
                nums[j++]=nums[i];
            }
            else
            {
                if(cnt<2)
                {
                    nums[j++]=nums[i];
                    cnt++;
                }
            }
        }
        return j;
        
    }
};