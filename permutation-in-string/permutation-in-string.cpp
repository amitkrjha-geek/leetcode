class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>s1f(26,0),s2f(26,0);
        int n=s1.size(),m=s2.size();
        if(n>m)return false;
        for(int i=0;i<n;i++)
        {
            s1f[(s1[i]-'a')]++;
                        s2f[(s2[i]-'a')]++;

        }
        if(s1f==s2f)return true;
        for(int j=n;j<m;j++)
        {  --s2f[(s2[j-n]-'a')];
                    ++s2f[(s2[j]-'a')];
        if(s2f==s1f)return true;}
        return false;
    }
};