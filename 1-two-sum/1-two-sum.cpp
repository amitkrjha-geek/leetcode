class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>store;
        for(int i=0;i<n;i++)
        {
            store.push_back({nums[i],i});
            
        }
         sort(store.begin(),store.end());
        int i=0,j=n-1;
        while(i<j)
            
        {   
            int d=store[i].first+store[j].first;
          //  cout<<d;
            if(d==target)return {store[i].second,store[j].second};
            else if(d>target)j--;
            else i++;
            
        }
        return {};
    }
};