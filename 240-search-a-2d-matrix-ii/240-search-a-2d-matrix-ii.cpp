class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int j=m-1;
        int i=0;
        while(j>=0&&i<n)
        {
            int a=matrix[i][j];
            if(a==target)
                return true;
            if(a>target)
               {
                   j--;
               }
               else i++;
        }
                              return false;

    }
};