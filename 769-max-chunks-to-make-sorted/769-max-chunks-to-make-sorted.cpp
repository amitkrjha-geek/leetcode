class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return 1;
        vector<int>v(n);
        v[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            v[i]=max(v[i-1],arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)i==v[i]?ans++:0;
        return ans==0?1:ans;
    }
};