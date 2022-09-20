class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int mx=0,ans=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<events.size();i++)
        {
            while(!pq.empty()&&pq.top().first<events[i][0])
            {
                mx=max(mx,pq.top().second),pq.pop();
            }
              ans = max(ans, mx+events[i][2]);
            pq.push({events[i][1], events[i][2]});
        }
        return ans;
    }
};