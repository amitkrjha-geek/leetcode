class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0,n=s.size()-1;
        //if(n==0&&s[0]!=' ')return 1;
        char j;
        for(int i=n;i>=0;i--)
        {
            //if(l==0&&s[n-i]==' ')continue;
                        if(s[i]!=' ')l++;
                        if(s[i]==' '&&l>0)return l;

            
        }
        return l;
    }
};