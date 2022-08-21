class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size();
        vector<int>a(j);
        int k=j;k--;
        j--;
        while(i<=j)
        {
            if(abs(nums[i])>abs(nums[j]))a[k--]=nums[i]*nums[i++];
            else a[k--]=nums[j]*nums[j--];
        }
        return a;
    }
};