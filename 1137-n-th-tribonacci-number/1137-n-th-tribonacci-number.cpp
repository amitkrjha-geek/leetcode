class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        int d;
        if(n==0)return a;
            else    if(n==1)return 1;
       else  if(n==2)return 1;
        else
        {  for(int i=2;i<n;i++)
        {
            d=a+b+c;
            
            a=b;
            b=c;
            c=d;
        }
        }
        return d;
        

    }
};