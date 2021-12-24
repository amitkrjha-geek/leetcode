class Solution {

public:
    vector<vector<int>> matrixBlockSum(vector<vector<int> >& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int> > p(m+1,vector<int>(n+1));
        p[0][0]=mat[0][0];
        for(int i=1;i<n;i++){
            p[0][i]=p[0][i-1]+mat[0][i];
        }
        for(int i=1;i<m;i++){
            p[i][0]=p[i-1][0]+mat[i][0];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+mat[i][j];
            }
        }
        vector<vector<int> > ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=p[min(i+k,m-1)][min(j+k,n-1)]-((j-k-1)>=0 ? p[min(i+k,m-1)][j-k-1] : 0)-((i-k-1)>=0 ? p[i-k-1][min(n-1,j+k)] : 0)+(((j-k-1)>=0 && (i-k-1)>=0) ? p[i-k-1][j-k-1] : 0);
            }
        }
        return ans;
    }
};
        
        
        
        
