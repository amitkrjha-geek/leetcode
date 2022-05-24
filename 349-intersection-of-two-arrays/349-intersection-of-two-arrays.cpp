class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //approach 1- using map
        // using binary search
        //using sorting
        vector<int>hash(1001);
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++)
        {
            hash[nums1[i]]=1;
        }
        vector<int>res;
        for(int i=0;i<m;i++)
        {
            if(hash[nums2[i]]==1)
            {
                res.push_back(nums2[i]);
                hash[nums2[i]]=-1;
            }
        }
            return res;
    }
};