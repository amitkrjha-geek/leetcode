class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> mp;
        for(int i = 0; i < time.size(); ++i){
            ++mp[time[i]%60];
        }
        
        int64_t counter = 0;
        for(int i = 0; i < time.size(); ++i){
            int t = (time[i] % 60);
            if(t != 0)      t = 60 - t;
            if(mp.find(t) != mp.end()){
                counter = counter + mp[t];
                if(t == (time[i] % 60)){
                    --counter;
                }
            } 
        }
        return counter/2;
    }

};