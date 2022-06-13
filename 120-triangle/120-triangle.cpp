class Solution {
public:
    int minimumTotal(vector<vector<int>>& tr) {
        int n=tr.size();
       // vector<int>dp(n,vector<int>(INT-));
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {   if(j==0)
                tr[i][j]=tr[i][j]+tr[i-1][j];
            else if(j==i)
                 tr[i][j]=tr[i][j]+tr[i-1][j-1];
              else
                                  tr[i][j]=tr[i][j]+min(tr[i-1][j],tr[i-1][j-1]);

            }
        }
        return *min_element(tr[n-1].begin(),tr[n-1].end());
    }
};