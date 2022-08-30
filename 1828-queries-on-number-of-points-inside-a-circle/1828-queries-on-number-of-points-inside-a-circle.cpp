class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int>ans;
        for(int i=0;i<q.size();i++)
        {
            int x=q[i][0];
            int y=q[i][1];
            int r=q[i][2];
            int c=0;
            for(int j=0;j<p.size();j++)
            {
                if(pow(abs(p[j][0]-x),2)+pow(abs(p[j][1]-y),2)<=r*r)c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};