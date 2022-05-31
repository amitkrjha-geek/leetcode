class Solution {
public:
    vector<int> nextGreaterElements(vector<int>&nums) {
       vector<int> res(nums.size(), -1);
        int n = nums.size();
        stack<int> s;
        for(int i = 0; i < n*2; i++){
            int num = nums[i%n];
            while(!s.empty() && nums[s.top()] < num){
                res[s.top()] = num;
                s.pop();
            }
            s.push(i%n);
        }
        return res;
    }
};