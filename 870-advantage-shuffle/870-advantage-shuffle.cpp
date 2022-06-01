class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int>>k;
        for(int i=0;i<nums2.size();i++)
        {
            k.push_back({nums2[i],i});
        }
        sort(nums1.begin(),nums1.end());
         sort(k.begin(),k.end());
        vector<int>res(nums2.size());
        int l=0,h=nums2.size();
        for(int i=0;i<h;)
        {
              if(k[i].first<nums1[l])
              {
                  res[k[i].second]=nums1[l];
                  l++;
                  i++;
              }
            else 
            {
                res[k[h-1].second]=nums1[l];
                l++;
                h--;
            }
                
        }
         return res;
    }
};