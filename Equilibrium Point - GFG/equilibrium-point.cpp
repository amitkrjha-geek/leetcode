// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
       int i,j;
       if(n==1){
           return 1;
       }
       long long sum1=0,sum2=0;
       for(i=0;i<n;i++){
           sum1+=a[i];
       }
       sum1-=a[n-1];
       for(j=n-2;j>=0;j--){
           sum1-=a[j];
           sum2+=a[j+1];
           if(sum1==sum2){
               return j+1;
           }
       }
       return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends