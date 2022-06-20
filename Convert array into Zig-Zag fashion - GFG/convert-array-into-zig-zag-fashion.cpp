// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void swap(int a,int b)
	{
	    int t=a;
	    a=b;
	    b=t;
	    
	}
	void zigZag(int arr[], int n) {
	    // code here
	  for(int i=1;i<n;i++){
        int temp=0;
        if(i%2!=0 && arr[i-1]>arr[i]){
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
        else if(i%2==0 && arr[i-1]<arr[i]){
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends