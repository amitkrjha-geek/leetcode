// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int a[], int n) {
	    // code here
	       int i = 0;
    for(int j = 0; j <  n ; j++){
        if(a[j] % 2 == 0){
            swap(a[i],a[j]);
            i++;
        }
    }
    int pos = i;
    for(int i = 0 ; i <  n ; i++){
        if(a[i] % 2 != 0){
            pos = i;
            break;
        }
    }
    sort(a,a+pos);
    sort(a+pos,a+n);
   
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
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends