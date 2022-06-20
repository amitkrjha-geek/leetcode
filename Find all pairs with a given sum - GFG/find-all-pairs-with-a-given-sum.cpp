// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // Your code goes here   
        set<int>s(a,a+n);
        vector<pair<int,int>>res;
        for(int i=0;i<m;i++)
        {
            if(s.find(x-b[i])!=s.end())res.push_back({x-b[i],b[i]});
        }
        sort(res.begin(),res.end());
        return res;
    }
};


// { Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends