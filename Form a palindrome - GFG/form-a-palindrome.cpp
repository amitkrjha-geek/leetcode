// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string S){
     
    
     int n = S.size(), dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    string s = S;
    reverse(s.begin(), s.end());
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(s[i-1] == S[j-1])
                dp[i][j] += 1+dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return n-dp[n][n];
    
    
    
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends