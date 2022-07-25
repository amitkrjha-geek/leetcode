class Solution {
public:
     
    int gcd(int a,int b){
        return b==0 ? a : gcd(b,a%b);
    }
    int lcm(int a,int b,int c){
        return a*1LL*b/c;
    } 
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> ans;
        ans.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(gcd(ans.top(),nums[i])!=1){
                int curr=lcm(ans.top(),nums[i],gcd(ans.top(),nums[i]));
                ans.pop();
                while(ans.size()>0 && gcd(curr,ans.top())!=1){
                    curr=lcm(ans.top(),curr,gcd(ans.top(),curr));
                    ans.pop();
                }
                ans.push(curr);
            }
            else
                ans.push(nums[i]);
        }
        vector<int> vect(ans.size(),0);
        for(int i=ans.size()-1;i>=0;i--){
            vect[i]=ans.top();
            ans.pop();
        }
        
        return vect;
    }
};