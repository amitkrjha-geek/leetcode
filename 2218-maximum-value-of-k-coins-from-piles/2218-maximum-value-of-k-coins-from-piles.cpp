class Solution {
public:
//     int memo(vector<vector<int>>& piles,int k,vector<vector<int>>&dp,int j)
//     {   if(j==piles.size())return 0;
        
//         if(dp[j][k]!=-1)return dp[j][k];
//            memo(piles,k,dp,j+1);
//         int ans=0,sum=0;
//         for(int i=0;i<piles[j].size();i++)
//         {   sum+=piles[j][i];
//          if(k-(i+1)>=0)
//             ans=max(ans,memo(piles,k-(i+1),dp,j+1)+sum);
//         }
//         return dp[j][k]=ans;
//     }
    int solve(int index, vector<vector < int>> &dp, vector< vector< int>> &p, int k)
        {
            if (index >= p.size())
                return 0;

            int maxi = 0, sum = 0;

            if (dp[index][k] != -1)
                return dp[index][k];
            
            //dont take from that pile
            maxi = max(maxi, solve(index + 1, dp, p, k));

            for (int i = 0; i < p[index].size(); i++)
            {
                sum += p[index][i];
                
                //take some certain prefix from that pile, if we can take that much elements.
                if (k - (i + 1) >= 0)
                    maxi = max(maxi, sum + solve(index + 1, dp, p, k - (i + 1)));
            }
            return dp[index][k] = maxi;	// return max
    }
        
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        int j=piles[0].size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return solve(0,dp,piles,k);
    }
};