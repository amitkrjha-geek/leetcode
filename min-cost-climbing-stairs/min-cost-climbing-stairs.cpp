class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //int dp[n];
       // dp[0]=cost[0];
        //dp[1]=cost[1];
        int a=cost[0];
        int b=cost[1];
        for(int i=2;i<n;i++)
        {int temp=min(a,b)+cost[i];
         a=b;
         b=temp;
         
        }
    
        return min(a,b); 
    }
};