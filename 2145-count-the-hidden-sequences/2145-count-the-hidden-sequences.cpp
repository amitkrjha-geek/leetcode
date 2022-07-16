class Solution {
public:
       typedef long long int lld;

    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        lld valley = 0;
        lld peek = 0;
        lld offset = 0;
        
        for (int v : differences) {
            offset += v;
            if (offset > peek) {
                peek = offset;
            }
            if (offset < valley) {
                valley = offset;
            }
        }
        int cnt = (int)((upper - peek) - (lower - valley) + 1);
        if (cnt <= 0) {
            return 0; 
        }
        return cnt;
    }

};