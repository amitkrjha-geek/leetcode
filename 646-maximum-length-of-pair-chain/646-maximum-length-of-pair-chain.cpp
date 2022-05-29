class Solution {
public:
    
//     int dp[1002];
    
//     int recurs(vector<vector<int>>& pairs,int i)
//     {
//         if(i>=pairs.size())
//         {
//             return 0;
//         }
        
//         if(dp[i]!=-1)
//         {
//             return dp[i];
//         }
        
//         int ans=0;
//         for(int j=i+1;j<pairs.size();j++)
//         {
//             if(pairs[i][1]<pairs[j][0])
//             {
//                 ans=max(ans,recurs(pairs,j)+1);
//             }
//              ans=max(ans,recurs(pairs,j));
//         }
//             return dp[i]= ans;
        
//     }
   
    
    
    
    
    int findLongestChain(vector<vector<int>>& pairs) {
        
//         for(int i=0;i<=pairs.size();i++)
//         {
//             dp[i]=-1;
//         }
        
//         sort(pairs.begin(),pairs.end());
        
//         int ans=0;
//         for(int i=0;i<pairs.size();i++)
//         {
//             ans=max(ans,recurs(pairs,i));
//         }
        
//         return ans+1;
          sort(pairs.begin(), pairs.end());
        int n=pairs.size();
        vector<int>lis(n+1);
        lis[0]=1;
        for(int i=1;i<n;i++)
        {  int ans=0;
            for(int j=0;j<i;j++)
            { if(pairs[i][0]>pairs[j][1])
                {
                    ans=max(ans,lis[j]+1);
                }
            else ans=max(ans,lis[j]);
            }
         lis[i]=ans;
         
        }
        return *max_element(lis.begin(),lis.end());
    }
};