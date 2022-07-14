// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    long long M = 1000000007;
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
         vector<int> t(n+1, -1);
        t[0] = 1;
        t[1] = 1;
        t[2] = 2;
        
        for(int i = 3; i<n+1; i++) {
            t[i] = (t[i-1]%M + t[i-2]%M + t[i-3]%M)%M;
        }
        return t[n];
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends