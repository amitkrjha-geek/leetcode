class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a(101);
        for(auto b:nums)a[b]++;
        int sum=a[0];
        for(int i=1;i<101;i++)
        {
            sum+=a[i];
            a[i]=sum;
        }
        vector<int>res(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)res[i]=0;
            else res[i]=a[nums[i]-1];
        }
        return res;
    }
};