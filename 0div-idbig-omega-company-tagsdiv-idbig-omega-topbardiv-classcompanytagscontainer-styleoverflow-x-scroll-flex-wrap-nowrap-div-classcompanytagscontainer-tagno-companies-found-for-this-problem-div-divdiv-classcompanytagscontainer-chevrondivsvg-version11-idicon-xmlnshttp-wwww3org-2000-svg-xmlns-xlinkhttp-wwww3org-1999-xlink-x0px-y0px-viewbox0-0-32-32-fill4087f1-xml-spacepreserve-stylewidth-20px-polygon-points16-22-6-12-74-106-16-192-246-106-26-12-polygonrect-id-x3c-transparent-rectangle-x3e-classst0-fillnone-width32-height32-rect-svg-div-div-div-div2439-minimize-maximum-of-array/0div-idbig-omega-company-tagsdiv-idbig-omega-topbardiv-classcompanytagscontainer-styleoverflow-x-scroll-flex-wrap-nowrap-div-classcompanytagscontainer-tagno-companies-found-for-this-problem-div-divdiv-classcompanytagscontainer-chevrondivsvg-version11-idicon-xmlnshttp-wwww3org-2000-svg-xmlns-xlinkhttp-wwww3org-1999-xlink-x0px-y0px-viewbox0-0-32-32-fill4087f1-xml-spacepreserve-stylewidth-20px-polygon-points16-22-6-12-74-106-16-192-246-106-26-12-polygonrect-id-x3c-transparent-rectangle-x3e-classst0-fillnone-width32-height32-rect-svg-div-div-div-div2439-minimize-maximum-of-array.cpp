class Solution {
public:
    using ll=long long;
    bool check(ll mid,vector<int>& nums)
    {
        vector<ll>copy(nums.begin(),nums.end());
        for(ll i=0;i<nums.size()-1;i++)
        {
            if(copy[i]<=mid)
            {
                ll diff=mid-copy[i];
                copy[i+1]-=diff;
            }
            else{
                return false;
            }
        }
        return copy[nums.size()-1]<=mid;
    }
    int minimizeArrayValue(vector<int>& nums) {
        ll lo=nums[0];
        ll hi=*max_element(nums.begin(),nums.end());

        ll ans=hi;
        while(lo<=hi)
        {
            ll mid=lo+(hi-lo)/2;
            if(check(mid,nums))
            {
                ans=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        return ans;
    }
};