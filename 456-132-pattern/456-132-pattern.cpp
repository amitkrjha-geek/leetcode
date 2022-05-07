class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
//         int m,s=INT_MAX,j=INT_MIN,k;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(s>nums[i]){s=nums[i];m=i;}
//             if(j<nums[i]){j=nums[i];k=i;}

//         }
//         if(m<k&&k<nums.size()-1)return true;
//         return false;
//     }
             stack<int> s;
        int prev = INT_MIN;
        
        for (auto it = nums.rbegin(); it != nums.rend(); it++) {
            while (!s.empty() && s.top() < *it) {
                if (prev > s.top())
                    return true;
                prev = s.top();
                s.pop();
            }
            
            s.push(*it);
        }
        
        return !s.empty() && prev > s.top();
        }
        
};