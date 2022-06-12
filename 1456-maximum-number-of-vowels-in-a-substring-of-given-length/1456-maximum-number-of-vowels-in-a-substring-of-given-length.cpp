class Solution {
public:
    int maxVowels(string s, int k) {
 queue<char> q;
        int cnt=0;
        int maxi=0;
        for(int i=0;i<s.length();i++)
        {
            q.push(s[i]);
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' )
            {
                cnt++;
            }
            if(q.size()==k)
            {
                maxi=max(maxi,cnt);
                char c= q.front();
                if(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u')
                {
                    cnt--;
                }
                q.pop();
            }
        }
        return maxi;
    }
};