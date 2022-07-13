// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int optimalKeys(int N){
        // code here
        long long int dp[N+1];
        memset(dp,1,sizeof dp);
        
        for(int i=1;i<=N;i++)
        {
            dp[i]=i;
            for(int j=i-3;j>=1;j--)
            {
                dp[i]=max(dp[i],1LL*dp[j]*(i-2-j+1));
                // i clicks total
                // j elapsed subproblem
                // 2 elapsed in key2 key3
                // now press key4 i-2-j times
                // original + i-2-j times
                // i-2-j+1
                
                
            }
        }
        return dp[N];

    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends