class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
          int start = 0, end = 0, zeros = 0, res = 0;
        
        for (end = 0; end < nums.size(); end++) {
            
            if (!nums[end])
                zeros++;
            
            
            while (zeros > k) {
                if (!nums[start]) zeros--;
                start++;
            } 
            
            res = max(res, end - start + 1);
        }
        
        return res;
    }
};