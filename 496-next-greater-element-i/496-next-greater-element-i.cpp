class Solution {
public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>m;
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() and nums2[i]>s.top()) s.pop();
	        if(s.empty()) m[nums2[i]] = -1;
	        else m[nums2[i]] = s.top();
	        s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    
    }
};