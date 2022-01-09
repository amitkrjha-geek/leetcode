// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1)return isBadVersion(n);
        int low=1,high=n,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(isBadVersion(mid)==false&&isBadVersion(mid+1)==true)return mid+1;
            else if(isBadVersion(mid))high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};