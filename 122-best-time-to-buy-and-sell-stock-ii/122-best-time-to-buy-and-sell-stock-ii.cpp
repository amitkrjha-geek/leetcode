class Solution {
public:
     int dp[50001][2];
    int solve(vector<int> &prices , int i , bool buy , int &fee){
        
        if(i == prices.size()) return 0;
        if(dp[i][buy] != -1) return dp[i][buy];
        if(buy){
            return dp[i][buy] = max(solve(prices , i+1 , false , fee)-prices[i] , solve(prices , i+1 , buy , fee));
        }
        else{
            return dp[i][buy] = max(solve(prices , i+1 , true , fee)+prices[i]-fee , solve(prices , i+1 , buy ,fee));
        }
    }
    
    int maxProfit(vector<int>& prices) {
        memset(dp , -1 , sizeof(dp));
        int fee=0;
        return solve(prices , 0 , true , fee);
    }
};