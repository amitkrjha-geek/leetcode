class Solution {
public:
    int maxVowels(string s, int k){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int count = 0,i = 0,j = 0, maxcount=0;
        while(j < s.size())
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'  )
                count++;
            if(j - i + 1 <= k) // reach required size
                j++;
            if(j - i + 1 > k) // if required size, count number of vowels
            {
                maxcount = max( maxcount,count);

                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
                    count--;
                i++; // slide window forward
            }
            
        }
        return maxcount;
    }
};