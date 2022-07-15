// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int>dp(n);
	    int ans=arr[0];
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=arr[i];
	        int temp=INT_MIN;
	        for(int j=0;j<i;j++)
	        { if(arr[i]>arr[j])
	            if(arr[i]+dp[j]>temp)
	            {
	                temp=arr[i]+dp[j];
	                dp[i]=temp;
	            }
	        }
	        ans=max(ans,dp[i]);
	    }
	    return ans;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends