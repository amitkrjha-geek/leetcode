//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(vector<int>&dp,int n,vector<int>m)
    {
        if(n==0)return 0;
        if(n<0)return INT_MIN;
        if(dp[n]!=-1)return dp[n];
       int ans=INT_MIN;
        for(int i=0;i<3;i++)
        {
            ans=max(ans,1+solve(dp,n-m[i],m));
        }
        return dp[n]=ans;
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>m;
        vector<int>dp(n+1,-1);
        m.push_back(x);
        m.push_back(y);
        m.push_back(z);
        int a= solve(dp,n,m);
        if(a<0)return 0;
        return a;
        
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends