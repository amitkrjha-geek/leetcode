class Solution {
public:
    bool check(vector<int>&nums,int l,int r)
    {
        vector<int>a(r-l+1);
        for(int i=l;i<=r;i++)a[i-l]=nums[i];
        sort(a.begin(),a.end());
        if(a.size()<3)return true;
        int d=a[1]-a[0];
        for(int i=2;i<a.size();i++)
        {
            if(a[i]-a[i-1]!=d)return false;
        }
    return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans(l.size());
        for(int i=0;i<l.size();i++)
        {
          
            ans[i]=check(nums,l[i],r[i]);
        }
        return ans;
    }
};