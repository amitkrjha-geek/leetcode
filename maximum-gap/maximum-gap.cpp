class Solution {
public:
    int maximumGap(vector<int>& nums) {
      int n = nums.size();
		
		//Base Case
        if (n < 2) return 0;
        if (n == 2) return max(nums[0], nums[1]) - min(nums[0], nums[1]);
        
		//Calculate minimum and maximum values in the given array
        int minVal = nums[0], maxVal = 0; 
        for (int num : nums) {
            minVal = min(num, minVal);
            maxVal = max(num, maxVal);
        }
        
		//Calculate the intervals i.e size of buckets
        int interval = (int)ceil((maxVal - minVal + 0.0) / (n - 1));
		
		//interval 0 implies all the data valuesin the array are same, hence max gap is 0
        if (!interval) return 0;
        
		//Initialize buckets, now we need on two because we wil be comparing only the maximum and minimum values in the interval, hence we dont need to store intermediate values
        vector<int> BucketMin(n-1, INT_MAX), BucketMax(n-1, -1);
        
		//Fill the buckets 
        int index;
        for (int num : nums) {
            if (num == maxVal || num == minVal) continue;
            index = (num - minVal) / interval;
            BucketMin[index] = min(BucketMin[index], num);
            BucketMax[index] = max(BucketMax[index], num);
        }
        
		
        int prev = minVal, res = 0;
        for (int i = 0; i < BucketMin.size(); i++) {
            if (BucketMax[i] == -1) continue;
            res = max(res, BucketMin[i] - prev);
            prev = BucketMax[i];
        }
        
        res = max(res, maxVal - prev);
        
        return res; 
    }
};