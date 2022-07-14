// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    
    //Function to find the length of longest common subsequence in two strings.
     int v[1001][1001];
   int solve(string a,string b,int x,int y){
       if(x==0||y==0) return 0;
       if(v[x-1][y-1]!=-1) return v[x-1][y-1];
       if(a[x-1]==b[y-1]) return v[x-1][y-1]=1+solve(a,b,x-1,y-1);
       else return v[x-1][y-1]=max(solve(a,b,x-1,y),solve(a,b,x,y-1));
   }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        memset(v,-1,sizeof(v));
   return solve(s1,s2,x,y);
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends