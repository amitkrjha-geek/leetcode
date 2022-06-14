class Solution {
public:
    
    
    vector<vector<int>> states = {{4,6},{6,8},{7,9},{4,8},{0,3,9},{},{0,1,7},{2,6},{1,3},{2,4}};
      int knh(int state, int n, vector<vector<int>> &dp){
                               if(n == 0) return 1; // base case
                                   int total = 0;

                        if(dp[state][n] != -1)
                     return dp[state][n]; 

               for(int j = 0 ; j < states[state].size() ; j++) 
                   total = (total + knh(states[state][j],n-1,dp)) %1000000007 ; 

                return dp[state][n] = total;
}


    int knightDialer(int n) {
         vector<vector<int>> dp (10, vector<int>(n,-1));
    int ans = 0;
    for(int i = 0 ; i <= 9 ; i++) // As you can start from any state (between 0 to 9)
        ans = (ans + knh(i,n-1,dp))%1000000007; 
    return ans;
    }
};