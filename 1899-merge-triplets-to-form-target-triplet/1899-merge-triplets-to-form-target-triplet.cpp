class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& t, vector<int>& target) {
    
        vector<bool> canFind {false, false, false};
        for (auto& triplet : t) {
            if (triplet[0] > target[0] or triplet[1] > target[1] or triplet[2] > target[2]) continue;
            if (triplet[0] == target[0]) canFind[0] = true;
            if (triplet[1] == target[1]) canFind[1] = true;
            if (triplet[2] == target[2]) canFind[2] = true;
        }
        
        return canFind[0] and canFind[1] and canFind[2];
    }
};