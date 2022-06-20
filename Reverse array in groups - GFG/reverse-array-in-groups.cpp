// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int num = n / k;
        
        if(num == 0)
        {
            reverse(0, n-1, arr);
            return;
        }
        
        int j = 0, m = k-1;
        for(int i = 1; i <= num; i++)
        {
            reverse(j, m, arr);
            j += k;
            m += k;
        }
        reverse(j, n-1, arr);
    }
    
    void reverse(int low, int high, vector<long long>& arr)
    {
        while(low <= high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends