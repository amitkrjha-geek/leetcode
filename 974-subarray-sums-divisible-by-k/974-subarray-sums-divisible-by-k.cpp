class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        if(!n)return 0;
        map<int,int>m;
        int count=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int find=sum%k;
            if(find<0)find+=k;
            cout<<find<<" "<<sum<<endl;
            count+=m[find];
            m[find]++;
        }
   
        return count;
    }
};