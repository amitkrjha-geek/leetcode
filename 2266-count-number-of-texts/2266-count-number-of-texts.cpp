class Solution {
public:
    int countTexts(string p) {
        int n=p.size();
        vector<long>dp(n+1);
        dp[0]=1;
        long long mod=1e9+7;
        for(int i=1;i<=n;i++)
        {
            char prev=p[i-1];
            dp[i]=dp[i-1];
            if(i>=2&&p[i-2]==prev)dp[i]=(dp[i]+dp[i-2])%mod;
            else continue;
            if(i>=3&&p[i-3]==prev)dp[i]=(dp[i]+dp[i-3])%mod;
            else continue;
             if((prev=='7'||prev=='9')&&(i-4)>=0&&prev==p[i-4])dp[i]=(dp[i]+dp[i-4])%mod;

        }
        
        return int(dp[n]%mod);
    }
};