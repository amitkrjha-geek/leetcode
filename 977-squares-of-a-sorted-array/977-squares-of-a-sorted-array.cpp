class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>res(nums.size());
        int start=0,end=nums.size()-1;
        int k=end;
        while(k>=0)
        {
            if(abs(nums[start])<abs(nums[end]))res[k]=nums[end]*nums[end--];
            else res[k]=nums[start]*nums[start++];
            k--;
        }
        return res;
    }
};