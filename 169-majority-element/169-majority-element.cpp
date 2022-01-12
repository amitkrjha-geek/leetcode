class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,check=nums[0];
        for(int i=1;i<nums.size();i++)
        {   
            if(nums[i]==check)count++;
            else count --;
            if( count==0){
            check=nums[i];
            count=1;
        }
        }
        //if(count<0)return nums[nums.size()-1];
        return check;
    }
};