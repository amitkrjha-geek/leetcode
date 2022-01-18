class Solution {
public:
    int longestPalindrome(string s) {
      vector<int> letters(52, 0);
        bool is_odd = false;
        int longest_palindrome = 0;
    
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] <= 'Z')
                letters[s[i] -'A' ]++;
            
            else 
                letters[s[i] -'a' + 26]++;
        }
   
        for(int i = 0; i < 52; i++)
        {
            longest_palindrome += letters[i] / 2;
            
            if(letters[i] % 2 ==1)
                is_odd =true;
        }
		
        return is_odd == true ? 2 * longest_palindrome + 1 : 2 * longest_palindrome;
    }

    
};