using ll = long long; 
class Solution {
public:
    bool check(int n, int k, ll budget, vector<int>mac, vector<int>st, vector<int>cost, ll items)
    {
        for(int i=0;i<n;i++){
            ll reqMetal = items * mac[i];
            if(reqMetal > st[i])
                budget -= ((reqMetal-st[i])*cost[i]);
            if(budget < 0)
                return false;
        }
        return (budget < 0) ? false : true;
    }
    
int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& c, vector<int>& st, vector<int>& cost) {
        int ans = 0;
        for(auto x: c){
            ll low = 0, high = INT_MAX;
            while(low <= high){
                ll mid = (low + high)/2;
                bool viable = check(n, k, budget, x, st, cost, mid);
                if(viable){
                    ans = max(ans, (int)mid);
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }

        }
        return ans;
    }
};