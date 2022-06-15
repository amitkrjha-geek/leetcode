class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
          unordered_map<int, int> map;    
        vector<int> dp (arr.size(), 1); 
        int res = 1;
        
        
        for (int i = 0; i < arr.size(); i++) {
            int searchVal = arr[i] - diff;
            int currVal = arr[i];

            if (map.find(searchVal) != map.end()) {
                dp[i] = max(dp[i], dp[map[searchVal]] + 1);
                res = max(dp[i], res);
            }
            
            map[currVal] = i;
        }
        return res;
    }
};