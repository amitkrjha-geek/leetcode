// { Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string printSequence(string S)
{
    //code here.
   vector<string> v={" ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    string ans="";
    for(int i=0;i<S.length();i++){
        for(int j=0;j<v.size();j++){
            for(int k=0;k<v[j].size();k++){
                if(S[i]==v[j][k]){
                    if(j==0)
                        ans+='0';
                    else{
                        int t=k+1;
                        string tmp="";
                        while(t--)tmp+=to_string(j+1);
                        ans+=tmp;
                    }
                }
            }
        }
    }
    return ans;
 
    
}