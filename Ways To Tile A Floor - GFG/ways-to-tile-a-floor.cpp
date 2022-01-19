// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long numberOfWays(long long N) {
       long long dp[N+1];
      dp[0]=0;
       dp[1]=1;
       dp[2]=2;
       for(int i=3;i<=N;i++)
       dp[i]=(dp[i-1]+dp[i-2])%1000000007;
       //code here
       return dp[N]%1000000007;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.numberOfWays(N) << endl;
    }
    return 0;
}  // } Driver Code Ends