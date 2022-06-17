class Solution {
public:
    vector<string> wordreak(string& s, int idx, unordered_set<string>& words, unordered_map<int, vector<string>>& dp) {
        if (dp.count(idx) == 0) {
            for (int i = idx-1; i >= 0; i--) {
                string tail = s.substr(i, idx-i);
                if (words.count(tail) == 0) continue;
                for (string sol : wordreak(s, i, words, dp)) {
                    dp[idx].push_back(sol.append(tail).append(" "));
                }
            }
        }
        
        return dp[idx];
    }
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words(wordDict.cbegin(), wordDict.cend());
        unordered_map<int, vector<string>> dp;
        dp[0] = {""};

        vector<string> result = wordreak(s, s.length(), words, dp);
        for (string& sentence : result) sentence.pop_back();
        return result;
    }
};