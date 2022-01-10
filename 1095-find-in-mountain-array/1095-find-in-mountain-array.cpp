/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &m) {
     int n = m.length();
        int left = 0, right = n-1, high, mid, val, preVal, postVal;
		//find the peak value
        while(left<=right){
            high = (left+right)/2;
            val = m.get(high);
            preVal = m.get(high-1);
            postVal = m.get(high+1);
            if(val > preVal && val > postVal) break;
            else if(val < postVal) left = high;
            else right = high;
        }
        //find the target in the left of peak
        left = 0, right = high;
        while(left <= right){
            mid = (left+right)/2;
            val = m.get(mid);
            if(val == target) return mid;
            else if(val < target) left = mid+1;
            else right = mid-1;
        }
        //find the target in the right of peak
        left = high, right = n-1;
        while(left <= right){
            mid = (left+right)/2;
            val = m.get(mid);
            if(val == target) return mid;
            else if(val > target) left = mid+1;
            else right = mid-1;
        }    
        //if we dont get the target
        return -1;}
};