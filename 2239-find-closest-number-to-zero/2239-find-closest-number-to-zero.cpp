class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int ans = 1e9;
        for(auto &it : nums){
            if(abs(it) == abs(ans)){
                ans = max(it,ans);
            }
            else if(abs(it) < abs(ans)){
                ans = it;
            }
        }
        return ans;
    }
};