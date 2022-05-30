
class Solution {
private:
    bool static cmp(vector<int> a, vector<int>b) {
        return a[1] < b[1];
    }

public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {

		
        vector <vector<int>> jobs;
        for (int i = 0; i < startTime.size(); i++) {
            jobs.push_back({ startTime[i],endTime[i],profit[i] });
        }

        sort(jobs.begin(), jobs.end(),cmp);

        map <int,int> dp;
        dp[jobs[0][1]] = (jobs[0][2]);
		
        dp[-1] = 0;

        int res = 0;
        for (int i = 1; i < startTime.size(); i++) {
            auto iter = dp.upper_bound(jobs[i][0]);
			
            int temp = jobs[i][2] + prev(iter, 1)->second;

            dp[jobs[i][1]] = max(dp[jobs[i - 1][1]], temp);
            res = dp[jobs[i][1]];
        }

        return res;
    }
}; 
        
    
