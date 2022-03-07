class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
         unordered_map<int,int>m;
        for(auto &it:nums1)
            for(auto &si:nums2)
                m[it+si]++;
        int c=0;
        for(auto &it3: nums3)
            for(auto &it4:nums4)
               if(m.count(0-it3-it4)) c+=m[0-it3-it4];
        
        return c;
    }
};