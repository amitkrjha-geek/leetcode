// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  

vector<vector<long long>> dp;
   long long func(int s[], int m, int n){
       if(dp[m][n]!=-1) return dp[m][n];
       if(n==0) return dp[m][n] = 1;
       if(m==0) return dp[m][n] = 0;
       if(s[m-1]<=n) 
       return dp[m][n] = func(s,m,n-s[m-1]) + func(s,m-1,n);
       return dp[m][n] = func(s,m-1,n);
   }
   long long int count(int S[], int m, int n) {
       // code here.
       dp = vector<vector<long long>>(m+1,vector<long long>(n+1,-1));
       func(S,m,n);
       return dp[m][n];
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends