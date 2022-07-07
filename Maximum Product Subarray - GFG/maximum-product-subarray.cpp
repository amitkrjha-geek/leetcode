// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
  long long max(long long a,long long  b)
  {
      if(a>b)return a;
      return b;
  }
   long long min(long long a,long long  b)
  {
      if(a>b)return b;
      return a;
  }
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=arr[0],a=arr[0],b=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]<0)swap(a,b);
	        a=max(arr[i],arr[i]*a);
	        b=min(arr[i],arr[i]*b);
	        ans=max(a,ans);
	       
	    }
	    
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends