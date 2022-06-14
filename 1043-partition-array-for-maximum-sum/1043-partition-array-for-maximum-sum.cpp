class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       int n=arr.size();
        vector<int> dp(n);
        int maxi=arr[0];
        for(int i=0;i<k;i++)
        {
            maxi=max(arr[i],maxi);
            dp[i]=(maxi*(i+1));
        }
        for(int i=k;i<n;i++)
        {
            dp[i]=arr[i]+dp[i-1];
            maxi=arr[i];
            for(int j=i-1;j>i-k;j--)
            {
                maxi=max(maxi,arr[j]);
                dp[i]=max(dp[i],dp[j-1]+ (i-j+1)*maxi);
            }
        }
        return dp[n-1]; 
    }
};