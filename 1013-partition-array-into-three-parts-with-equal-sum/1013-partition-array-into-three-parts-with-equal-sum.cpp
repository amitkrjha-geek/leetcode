class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size(),total=0,sum=0,parts=0;
        for(int i=0;i<n;i++)
            total+=arr[i];
        if(total%3!=0)return false;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==(total/3))
            {
                sum=0;
                parts++;
            }
        }
        if(parts>=3)return true;
        return false;
            
    }
};