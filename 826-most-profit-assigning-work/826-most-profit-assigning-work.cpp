class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
                int cost=0;
        sort(worker.begin(),worker.end());
        int n=difficulty.size()-1;
        int m=profit.size()-1;
        vector<pair<int,int>>v;
        for(int i=0;i<=m;i++)
        {
            v.push_back(make_pair(profit[i],difficulty[i]));
        }
        sort(v.begin(),v.end());
        int k=worker.size()-1;
        while(k>=0&&m>=0&&n>=0)
        {
            if(worker[k]>=v[m].second)
            {
                cost+=v[m].first;
                k--;
            }
            else
            {
                m--;
            }
            
        }
        return cost;
    
    }
};