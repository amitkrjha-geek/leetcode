// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int tb[201][201];
    int solve(int n,int k){
        if(k==1 || k==0||n==1){
            return k;
        }
        if(tb[n][k]!=-1){
            return tb[n][k];
        }
        int ans = INT_MAX;
        for(int i=1;i<=k;i++){
            int temp = max(solve(n-1,i-1),solve(n,k-i))+1;
            ans = min(ans,temp);
        }
        return tb[n][k] = ans;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(tb,-1,sizeof(tb));
        return solve(n,k);
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends