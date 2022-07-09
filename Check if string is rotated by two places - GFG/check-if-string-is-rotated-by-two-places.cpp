// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
     bool leftRotated(string str1,string str2){
        reverse(str1.begin(),str1.begin()+2);
        reverse(str1.begin()+2,str1.end());
        reverse(str1.begin(),str1.end());
        return str1 == str2;
    }
   
   bool rightRotated(string str1,string str2){
        reverse(str1.rbegin(),str1.rbegin()+2);
        reverse(str1.rbegin()+2,str1.rend());
        reverse(str1.begin(),str1.end());
        return str1 == str2;
    }
   
    bool isRotated(string str1, string str2)
    {
        if(leftRotated(str1,str2))
            return true;
        if(rightRotated(str1,str2))
            return true;
        return false;
    }
};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends