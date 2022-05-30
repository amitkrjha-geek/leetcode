class Solution {
public:
    int balancedStringSplit(string s) {
        int a=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {

          if(s[i]=='R')a++;
         if(s[i]=='L')a--;
            if(a==0)count++;
          // cout<<a;

        
        }
        return count;
    }
};