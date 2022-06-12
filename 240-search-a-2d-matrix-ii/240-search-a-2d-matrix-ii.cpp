class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int t) {
        int n=mt.size();
        int m=mt[0].size();
        int i=0,j=m-1;
        while(i<n&&j>=0)
        {
            if(mt[i][j]==t)return true;
            if(mt[i][j]>t)j--;
            else i++;
        }
        return false;
    }
};