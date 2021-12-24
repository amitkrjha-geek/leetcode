class NumMatrix {
public:
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return ;
        dp.resize(matrix.size(),vector<int> (matrix[0].size()));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(j==0)
                    dp[i][j]=matrix[i][j];
                else
                    dp[i][j]=dp[i][j-1]+matrix[i][j];
            }
            if(i>=1)
            {
                for(int k=0;k<matrix[0].size();k++)
                {
                    dp[i][k]=dp[i-1][k]+dp[i][k];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int x=(row1>0 && col1>0) ? dp[row1-1][col1-1] : 0;
        int y= (col1>0) ? dp[row2][col1-1] :0;
        int z=(row1> 0) ? dp[row1-1][col2] : 0;
        
        return dp[row2][col2]+x-y-z;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */