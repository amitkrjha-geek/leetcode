class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>sm(n);
        sm[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sm[i]=max(sm[i+1],height[i]);
        }
        int mt=height[0],ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans+=max(0,min(mt,sm[i+1])-height[i]);
            mt=max(mt,height[i]);
        }
        return ans;
    }
};