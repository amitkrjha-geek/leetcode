class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int running_min=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            profit=max(profit,prices[i]-running_min);
            running_min=min(running_min,prices[i]);
        }
         profit=max(profit,prices[prices.size()-1]-running_min);
        return profit;

    }
};