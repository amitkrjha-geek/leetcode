class Solution {
public:
    int m,n;
    int p(vector<vector<int>>&d,vector<vector<int>>&dp,int i,int j)
    {
        if(i>=n||j>=m)return INT_MAX;
        if(dp[i][j]!=0)return dp[i][j];
        int l=min(p(d,dp,i+1,j),p(d,dp,i,j+1));
        if(l==INT_MAX)l=1;
        dp[i][j]=max(l-d[i][j],1);
        return dp[i][j];
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        n=dungeon.size();
        m=dungeon[0].size();
        vector<vector<int>>dp(n,vector<int>(m));
        return p(dungeon,dp,0,0);
    }
};