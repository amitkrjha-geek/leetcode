class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int it=m+n;
        it--;m--;n--;
        while(m>=0&&n>=0)
        {
            if(nums1[m]>nums2[n])
            {
                nums1[it--]=nums1[m--];
            }
            else
                nums1[it--]=nums2[n--];
                
        }
        //if(n==0)return;
        while(n>=0)nums1[it--]=nums2[n--];
    }
};