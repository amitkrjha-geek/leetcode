// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    vector<string>ans;
    void func(string &s,int i,string j)
    {  // if(i>s.size())return;
        if(i==s.size())
        {
            ans.push_back(s);
            return;
        }
        for(int k=i;k<s.size();k++)
        {
            
            swap(s[i],s[k]);
            func(s,i+1,j);
            swap(s[i],s[k]);
        }
    }
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    string j;
		    func(s,0,j);
		    sort(ans.begin(),ans.end());
		    ans.erase(unique(ans.begin(), ans.end()), ans.end());
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends