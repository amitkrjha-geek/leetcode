class Solution {
public:
    int fib(int n) {
       int a=0,b=1;
        for(int i=0;i<n;i++)
        {
           int t=a;
            a=b;
            b+=t;
            
        }
        return a;
    }
};