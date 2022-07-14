// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
          vector<int> coin = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
       int n = 9;
       vector<int> v;
       
       if(N<coin[n])
       {
           while(N<coin[n])
           {
               n--;
           }
       }
       
       while(N)
       {
           if(N<coin[n])
           {
               n--;
               continue;
           }
           while(N>=coin[n])
           {
               v.push_back(coin[n]);
               N-=coin[n];
           }
           
       }
       
       return v;
   
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends