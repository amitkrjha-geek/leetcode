
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>m;
        for(int a:arr)m[a]++;
        vector<int>vis;
        for(auto it:m)
        {  
           vis.push_back(it.second);
            
        }
        int t=vis.size();
        sort(vis.begin(),vis.end());
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i]<=k)
            {
                k-=vis[i];
                t--;
            }
            else break;
        }
        return t;
        
    }
};