class Solution {
public:
    int countCollisions(string s) {
        int n=s.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<=j&&s[i]=='L')i++;
        while(i<=j&&s[j]=='R')j--;
        while(i<=j)
        {
            if(s[i]!='S')ans++;
            i++;
        }
        return ans;
    }
};