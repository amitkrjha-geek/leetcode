class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ma=0;
        vector<int>suffixmax(n);
        suffixmax[n-1]=prices[n-1];
        for(int i=n-1;i>=1;i--)
        {
            suffixmax[i-1]=max(suffixmax[i],prices[i-1]);
        }
        for(int i=0;i<prices.size();i++)
        {
          
            ma=max(ma,suffixmax[i]-prices[i]);
          //  cout<<suffixmax[i];
        }
        return ma;
    }
};