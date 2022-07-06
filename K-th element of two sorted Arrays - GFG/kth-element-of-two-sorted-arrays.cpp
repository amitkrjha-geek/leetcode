// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {int i=1;
       int j=0;
       int k1=0;
       int num;
       while(i<=k and j<n and k1<m)
       {
           if(arr1[j]>=arr2[k1])
           {
               num = arr2[k1];
               k1++;
           }
           else if(arr1[j]<arr2[k1])
           {
               num=arr1[j];
               j++;
               
           }
           if(i==k)
           return num;
           i++;
           
       }
       while(j<n)
       {
           if(i==k)
           {
               return arr1[j];
           }
           j++;
           i++;
       }
       while(k1<m)
       {
           if(i==k)
           {
               return arr2[k1];
           }
           k1++;
           i++;
       }
   }
    
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends