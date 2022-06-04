// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	
	
	int c=0;
	vector<string>v;
	queue<string>g;
	g.push("1");
//	v.push_back(s);
	while(c<N)
	{
	    string j=g.front();
	    g.pop();
	    g.push(j+"0");
	    g.push(j+"1");
	    v.push_back(j);
	    c++;
	}
	return v;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends