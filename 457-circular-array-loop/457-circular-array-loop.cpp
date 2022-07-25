class Solution {
public:
bool dfs(int curr, vector<int>&nums, int &size,vector<int>&colors)
    {
        int next = (curr + nums[curr]%size + size)%size;
        
        if(curr == next) return false; // self value loop 
        if(colors[next]==1) return true;    // cycle
        
        colors[curr] = 1;   // visit begin
        
        bool result = false;
        if((nums[next] >0 && nums[curr]>0) || (nums[next] <0 && nums[curr]<0))
            result |= dfs(next,nums,size,colors);
        
        nums[curr] = 0; // mark value 0
        colors[curr] = 2;   // visit complete
        return result;
    }
    
    bool circularArrayLoop(vector<int>& nums) {
        
        int size = nums.size();
        vector<int>colors(size,0);
        
        for(int i=0;i<size;i++)
        {
            if(nums[i]==0)continue;
            
            if(dfs(i,nums,size,colors))return true;
        }
        
        return false;
    }
};