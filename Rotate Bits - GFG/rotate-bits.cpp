// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
             vector<int>v(2);
            d=d%16;
            int temp=((1<<(16+d))-1)^((1<<16)-1);
            temp=(n<<d)&temp;
            v[0]=((n<<d)^temp)|(temp>>16);
            v[1]=(n>>d)|((n&((1<<d)-1))<<(16-d));
            return v;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends