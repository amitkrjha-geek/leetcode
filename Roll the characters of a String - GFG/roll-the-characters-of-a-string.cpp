// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	string findRollOut(string s, long long arr[], int n)
	{
	    // Your code goes here
	    vector<long long>v(n);
	   // v[n-1]=arr[n-1];
	    for(int i=0;i<n;i++)
	    {
	        v[arr[i]-1]++;
	    }
	    for(int i= n-2;i>=0;i--)
	    {
	        v[i]+=v[i+1];
	    }
	    for(int i=0;i<n;i++)
	    
	    {  // cout<<v[i]<<endl;
	        s[i]=((s[i]-'a')+v[i]%26)%26+'a';
	    }
	    return s;
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
        cin>>n;
        string s;
        cin>>s;
        long long roll[n];
        for(int i=0;i<n;i++)
            cin>>roll[i];

       

        Solution ob;

        string res = ob.findRollOut(s, roll, n);
        cout << res;
		

        
	    cout << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends