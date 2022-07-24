class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> pq(piles.begin(), piles.end());
        while(k--) {
            int num=pq.top();
            pq.pop();
            num = num - floor(num/2);
            pq.push(num);
        }
        int ans=0;
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
        return ans; 
    }
};