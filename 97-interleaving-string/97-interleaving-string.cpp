class Solution {
public:
    bool memo(string &s1,string &s2,string &s3,int i,int j,int k,vector<vector<int>>&dp
)
    {
        if(i==s1.size()&&j==s2.size()&&k==s3.size())return true;
        if(i>s1.size()||k>s3.size()||j>s2.size())return false;
        if(dp[i][j]!=-1)return dp[i][j];
        bool ans;
        if(s1[i]==s3[k]&&s2[j]==s3[k])ans=memo(s1,s2,s3,i+1,j,k+1,dp)||memo(s1,s2,s3,i,j+1,k+1,dp);
        else if(s1[i]==s3[k])ans=memo(s1,s2,s3,i+1,j,k+1,dp);
                else if(s2[j]==s3[k])ans=memo(s1,s2,s3,i,j+1,k+1,dp);
        else ans=false;
        return dp[i][j]=ans;

    }
    bool isInterleave(string s1, string s2, string s3) {
        
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return memo(s1,s2,s3,0,0,0,dp);
        
        
        
    }
};