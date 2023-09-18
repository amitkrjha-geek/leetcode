class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
    
        vector<pair<int,int>>strength;
        
        for (int i=0;i<m;i++) {
            int sum=0;
            for(int j=0;j<n;j++){
                sum += mat[i][j];
            }
            strength.push_back({sum, i});
        }
        
        sort(strength.begin(), strength.end());
        
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(strength[i].second);
        }
        
        return result;
    }
};