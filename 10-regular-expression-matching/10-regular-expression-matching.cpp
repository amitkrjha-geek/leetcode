class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.length()+1,vector<int> (p.length()+1,-1));
        return helper(s,p,0,0,dp);
    }

    int helper(string &s,string &p,int i,int k,vector<vector<int>>& dp){
            if(dp[i][k]!=-1) return dp[i][k];
            if(i==s.length() && k==p.length()) return dp[i][k]=1;
            if(k>=p.length()) return dp[i][k]=0;
            bool match =i<s.length() && (s[i]==p[k] ||p[k]=='.');
            if(k<p.length()-1){
                if(p[k+1]=='*'){
                    int opt1 = helper(s,p,i,k+2,dp);
                    int opt2 =(match && helper(s,p,i+1,k,dp));
                    return dp[i][k] =(opt1 || opt2);
                }
            }
            if(match) return dp[i][k] = helper(s,p,i+1,k+1,dp);
            return dp[i][k]=0; 
    }

};