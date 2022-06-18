// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int f(vector<vector<int>>&mat,int n,vector<int>&dp)
   {
       if(n==0)return 0;
       if(n==1)return max(mat[0][0],mat[1][0]);;
       if(dp[n]!=-1)return dp[n];
       return dp[n]=max(f(mat,n-1,dp),max(mat[0][n-1],mat[1][n-1])+f(mat,n-2,dp));
   }
    int maxSum(int n, vector<vector<int>> mat)
    {
        // code here
        vector<int>dp(n+1,-1);
        // dp[0]=0;
        // dp[1]=max(mat[0][0],mat[1][0]);
        // for(int i=2;i<=n;i++)
        // {
        //     dp[i]=max(dp[i-1],max(mat[0][i-1],mat[1][i-1])+dp[i-2]);
        // }
        // return dp[n];
        
         return  f(mat,n,dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> mat(2, vector<int>(N, 0));
        for(int i = 0;i < 2; i++){
            for(int j = 0; j < N; j++)
                cin>>mat[i][j];
        }
        
        Solution ob;
        cout<<ob.maxSum(N, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends