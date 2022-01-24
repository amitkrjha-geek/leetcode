// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
  int fnc(int a[],int n,int sum,vector<vector<int>>&dp){
       if(sum==0)return 1;
       if(n<=0)return 0;
       if(dp[n][sum]!=-1)return dp[n][sum];
       dp[n][sum]=fnc(a,n-1,sum-a[n-1],dp)+fnc(a,n-1,sum,dp);
       return dp[n][sum];
   }
   bool isSubsetSum(int n, int a[], int sum){
       vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
       return fnc(a,n,sum,dp);
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends