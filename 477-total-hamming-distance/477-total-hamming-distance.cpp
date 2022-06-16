class Solution {
public:
    // int h(int x, int y) {
    //    int ans=0;
    //     while(x!=0||y!=0)
    //     {
    //         ans+=(x&1)!=(y&1);
    //         x>>=1;
    //         y>>=1;
    //     }
    //     return ans;
    // }
    int totalHammingDistance(vector<int>& nums) {
        if (nums.size() <= 0) return 0;
        
        int res = 0;
        
        for(int i=0;i<32;i++) {
            int setCount = 0;
            for(int j=0;j<nums.size();j++) {
                if ( nums[j] & (1 << i) ) setCount++;
            }
            
            res += setCount * (nums.size() - setCount);
        }
        
        return res;
    }
};