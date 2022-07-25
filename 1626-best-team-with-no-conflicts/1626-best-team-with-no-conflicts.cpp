class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
         int n = scores.size();
        vector<pair<int, int>> players;
        for(int i = 0; i < n; i++) {
            players.push_back({ages[i], scores[i]});
        }
        sort(players.begin(), players.end());
        int dp[n]; 
        dp[0] = players[0].second;
        for(int i = 1; i < n; i++) {
            dp[i] = players[i].second;
            for(int j = i - 1; j >= 0; j--) {
                if(players[j].first == players[i].first) {
                    dp[i] = max(dp[i], players[i].second + dp[j]);
                } else if(players[j].second <= players[i].second) {
                    dp[i] = max(dp[i], players[i].second + dp[j]);
                }
            }
           
        }
         return *max_element(dp,dp+n);}
};