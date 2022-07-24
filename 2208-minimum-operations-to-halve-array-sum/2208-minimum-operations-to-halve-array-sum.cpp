class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> p;
 
        double half = 0;
        double sum=0;
        for(auto i : nums){
            sum += (double)i;
            p.push((double)i);
        }
        half = (double) sum/2;
        int cnt=0;
        while(sum > half){
            auto t = p.top();
            p.pop();
            double x = (double)t/2;
            p.push(x);
            sum -= x;
            cnt++;
        }
        return cnt;
    }
};