class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=INT_MAX,max=INT_MIN,profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            mini=min(prices[i],mini);
        if(profit<prices[i]-mini)profit=prices[i]-mini;
        }
      return profit;  
    }
};