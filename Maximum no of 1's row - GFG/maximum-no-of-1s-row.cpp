// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &arr, int n, int m)
        {
            // your code here
            int ans = 0, checkOnes = 0, x = 0;
           for(int i=0; i<n; i++)
           {
               int j = 0, k = m-1;
               
               while(j<=k)
               {
                   int mid = (j+k)/2;
                   
                   if(arr[i][mid] == 1)
                   {
                       checkOnes = mid;
                       k = mid-1;
                   }
                   
                   else
                       j = mid+1;
               }
               
               if(m-checkOnes>x)
               {
                   x = m-checkOnes;
                   ans = i;
               }
           }
           return ans;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends