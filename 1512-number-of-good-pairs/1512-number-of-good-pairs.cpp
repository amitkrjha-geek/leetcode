class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        int count=0;
        for(auto a:nums)
        {
            if(m[a]>0)count+=m[a];
            m[a]++;
        }
        return count;
    }
};