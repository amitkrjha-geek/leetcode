class Solution {
public:
    int maxScore(vector<int>&c, int k) {
int sum=0,sum1=0,win=c.size()-k,ans=0;
        
        for(auto x:c)
        {
            sum+=x;
        }
        
        for(int i=0;i<win;i++)
        {
            sum1+=c[i];
        }
        ans=max(ans,sum-sum1);
        
        
        for(int i=win;i<c.size();i++)
        {
            sum1-=c[i-win];
            sum1+=c[i];
            ans=max(ans,sum-sum1);
        }
        
        return ans;
    }
};