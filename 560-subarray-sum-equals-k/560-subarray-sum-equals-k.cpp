class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        map<int,int>m;
        int count=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int find=sum-k;
            count+=m[find];
            m[sum]++;
        }
   
        return count;
        
    }
};