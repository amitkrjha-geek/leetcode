// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int a,b,c;
    	for(int i=0;i<n;i++)
    	{  
    	    
    	}
    	 int max_idx = n - 1, min_idx = 0;


    int max_elem = arr[n - 1] + 1;

    // traverse array elements
    for (int i = 0; i < n; i++) {
        
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        }

        // at odd index : we have to put minimum element
        else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }

    // array elements back to it's original form
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] / max_elem;
    }

};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends