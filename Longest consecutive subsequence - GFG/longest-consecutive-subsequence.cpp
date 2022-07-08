// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
     unordered_map<int, bool> um;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0; i<N; i++){
            mini = min(arr[i], mini);
            maxi = max(arr[i], maxi);
            um[arr[i]] = true;
        }
        
        int start=mini;
        int res = 1;
        
        for(int i=mini+1; i<=maxi; i++){
            if(um.find(i) != um.end()){
                res = max(res, i-start+1);
            }
            else start = i+1;
        }
        return res;
      
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends