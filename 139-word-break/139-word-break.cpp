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
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> d(wordDict.begin(), wordDict.end());
        vector<int> memo(s.length(), -1); 
        return helper(s, 0, d, memo);
    }
};