class Solution {
public:
    int kadane (vector<int>& arr){
    int ans = arr[0], sum = 0;
    for(int i:arr){
        sum+=i;
        ans = max(ans, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}
int maxSubarraySumCircular(vector<int>& nums) {
    int x = kadane(nums);
    int sum =0;
    for(int& i:nums){
        sum+=i;
        i = - i;
    }
    int y = kadane(nums);
    if(sum + y == 0){
        return x;
    }
    return max(x, y+sum);
}
};