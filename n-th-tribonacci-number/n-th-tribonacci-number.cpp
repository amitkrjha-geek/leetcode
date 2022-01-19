class Solution {
public:
    int tribonacci(int n) {
        long long a=0,b=1,c=1,d;
        for(int i=0;i<n;i++)
        {
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return a;
    }
};