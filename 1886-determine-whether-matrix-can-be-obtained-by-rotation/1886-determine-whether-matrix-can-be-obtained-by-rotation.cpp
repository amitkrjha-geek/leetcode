class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
          
        int m = mat.size();
        int n = mat[0].size();
        
        bool one = true, two = true, three = true, four = true;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                //rotate one time
                if (mat[i][j] != target[j][n-i-1]) {
                    one = false;
                }
                //rotate two times
                if (mat[i][j] != target[m-i-1][n-j-1]) {
                    two = false;
                }
                //roate three times
                if (mat[i][j] != target[n-j-1][i]) {
                    three = false;
                }
                //roate four times
                if (mat[i][j] != target[i][j]) {
                    four = false;
                }
            }
        }
        
        return one || two || three || four;
    }
};