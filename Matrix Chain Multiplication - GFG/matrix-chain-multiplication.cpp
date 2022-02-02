// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int  dp[1001][1001];
    int solve(int a[], int i, int j)
    {
        if (i==j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = INT_MAX;
        for (int k = i; k < j; k++)
        {
            dp[i][j] = min(dp[i][j] , solve(a,i,k)  +
                                      solve(a,k+1,j)  +
                                      a[i-1]*a[k]*a[j]);
        }
        return dp[i][j];
    }
    int matrixMultiplication(int n, int a[])
    {
         memset(dp, -1, sizeof dp);
        return solve(a,1,n-1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends