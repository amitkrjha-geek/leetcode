class Solution {
public:
        int pp(int i, int hold, int k, vector<vector<vector<int>>> & dp, vector<int>& p)
      {
        if(i==p.size() || k==0) return 0;
        if(dp[i][k][hold]!=-1) return dp[i][k][hold];
        int noti=pp(i+1,hold,k,dp,p);
        if(hold==1)
        {
            int sell=pp(i+1,0,k-1,dp,p);
            dp[i][k][hold]=max(sell+p[i],noti);
        }
        else
        {
            int buy=pp(i+1,1,k,dp,p);
            dp[i][k][hold]=max(buy-p[i],noti);
        }
        return dp[i][k][hold];
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(3,vector<int>(2,-1)));
        return pp(0,0,2,dp,prices);
    }
};
