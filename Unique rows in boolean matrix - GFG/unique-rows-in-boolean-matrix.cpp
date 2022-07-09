// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
      vector<vector<int>> arr;
   vector<int> t;
   map<vector<int>, int> mp;
   for(int i = 0; i < row; i++)
   {
       for(int j = 0; j < col; j++)
       {
           t.push_back(M[i][j]);
       }
       mp[t] = 1;
       arr.push_back(t);
       t.clear();
   }
   vector<vector<int>> ans;
   for(int i = 0; i < row; i++)
   {
       if(mp[arr[i]] == 1)
       {
           ans.push_back(arr[i]);
           mp[arr[i]] = 0;
       }
   }
   return ans;

}