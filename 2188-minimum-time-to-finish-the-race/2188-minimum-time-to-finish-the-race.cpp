class Solution {
public:
         int N = 16;
    int cost[16]; // 2^14 = 16384 > 100000 
public:
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        for(int i = 1; i < 16; i++){ cost[i] = INT_MAX;}
        cost[0] = 0;
        
        for(auto &T:tires){
            int num = T[0];
            int accu = T[0];
            cost[1] = min(cost[1], accu+changeTime);
            for(int i = 2; i < 16; i++){
                if(INT_MAX / num <= T[1]){break;}  // prevent overflow
                num *= T[1];
                if(num > T[0] + changeTime){break;} // if cost time of current lap > T[0] + changeTime, then tire should be changed
                accu += num;
                cost[i] = min(cost[i], accu+changeTime);
            }
        }
        
        //cost[i] -> the smallest cost for using the same tire to finish running i laps
        
        int lrg = 0;
        for(int i = 0; i < 16; i++){
            if(cost[i] != INT_MAX){
                lrg = i;
            }
        }
        
        vector<int> dp(numLaps+1,200000000);
        dp[0] = 0;
        for(int i = 1; i <= lrg; i++){
            for(int j = i; j <= numLaps; j++){
                dp[j] = min(dp[j], dp[j-i] + cost[i]);
            }
        }

        return dp[numLaps]-changeTime;  //first round doesn't change tires
         
    }
};