// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int l=0,m=0,h=0;
        for(int i=0;i<n;i++){
         if(a[i]==0)
         {
           l++;
         }
         else if (a[i]==1)m++;
         else 
         {
             h++;
         }
        }
        int i=0;
        while(i<l)
        {
            a[i++]=0;
        }
        while(i<l+m)
        {
            a[i++]=1;
        }
         while(i<l+m+h)
        {
            a[i++]=2;
        }
         
        }

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends