class Solution {
public:
    bool isHappy(int n) {
        int count=0;
        while(1)
        {    int a=0;
            while(n)
            {
                 a+=(n%10)*(n%10);
                n/=10;
                count++;
            }
       if(a==1)return true;
         if(count>31)return false;
       //  else if()
         n=a;
        }
        return true;
    }
};