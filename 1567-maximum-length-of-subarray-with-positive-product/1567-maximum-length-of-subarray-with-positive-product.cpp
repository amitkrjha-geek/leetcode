class Solution {
public:
    int getMaxLen(vector<int>& nums) {
       int maxLen = 0;
    for (int sectionStart = 0; sectionStart < nums.size(); ) {
        while (sectionStart < nums.size() && !nums[sectionStart]) sectionStart++; // ignore leading 0s
		
        int evenNeg = 0;            
        int first = -1, last = -1;  
        int i = sectionStart;
        for (; i < nums.size(); i++) {
            if (!nums[i]) break;    
            if (nums[i] < 0) {
                evenNeg ^= 1;
                (first < 0) && (first = i);
                last = i;
            }
        }
        maxLen = max(maxLen, evenNeg ? max(last - sectionStart, i - first - 1) : i - sectionStart);
        sectionStart = i + 1;
    }
        return maxLen;
        
    }
};