class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string j;
        for(int i=0;i<n;i++)
        {
          int k=int(s[i]);
            if(k>=97&&k<=122||s[i]>='0'&&s[i]<='9')
               j+=s[i];
            else if(k>=65&&k<=90)
                j+=tolower(s[i]);
            else
                continue;
        }
        bool h=true;
        int k=0,l=j.size()-1;
        cout<<j;
        while(k<l)
        {
            if(j[k]!=j[l]){
                return false;
            }
            else
                k++,l--;
        }
        return h;
    }
};