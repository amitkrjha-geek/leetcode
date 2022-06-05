class Solution {
public:
        vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), temp = 1;
        vector<int> res(n);
        
        for (int i=0; i<n; i++) {
            res[i] = temp;
            temp *= nums[i];
        }
        
        temp = 1;
        for (int i=n-1; i>=0; i--) {
            res[i] *= temp;
            temp *= nums[i];
        }
        
        return res;
    }
};
    