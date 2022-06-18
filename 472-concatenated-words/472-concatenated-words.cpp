class Solution {
public:
     bool helper(const string& s, int start, const unordered_set<string>& d, vector<int>& memo) {
        if (start == s.size()) {
            return true;
        }
        
        if (memo[start] != -1) return memo[start];
        
        for (int i = start + 1; i <= s.size(); ++i) {
            const string sub = s.substr(start, i - start); 
            if (d.count(sub) == 1) {
                if (helper(s, i, d, memo)) {
                    memo[start] = 1;
                    return true;
                }
            }
        }
        
        memo[start] = 0;
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string>m;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            m.insert(words[i]);
        }
        vector<string>p;
         for(int i=0;i<n;i++)
        {
            m.erase(words[i]);
          vector<int> memo(words[i].length(), -1); 
             if(helper(words[i],0,m,memo))
                 p.push_back(words[i]);
             m.insert(words[i]);
             
        }
        return p;
        
    }
};