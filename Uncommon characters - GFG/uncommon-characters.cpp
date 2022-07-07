// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            map<char,int>a,b;
            for(auto it:A)
            {
                a[it]++;
            }
             for(auto it:B)
            {
                b[it]++;
            }
            set<char>c;
           // string c;
            for(auto it:A)
            {
                if(b.count(it)==0)c.insert(it);
            }
             for(auto it:B)
            {
                if(a.count(it)==0)c.insert(it);
            }
            if(!c.size())return "-1";
            string C;
            for(auto it:c)
            {
                C+=it;
            }
            return C;
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends