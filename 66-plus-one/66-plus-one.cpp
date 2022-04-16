class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1,i=digits.size()-1;
        vector<int>v;
        while(i>=0||carry!=0)
        {
            if(i>=0)carry+=digits[i];
            v.push_back(carry%10);
            carry=carry/10;
            i--;
            
        }
        reverse(v.begin(),v.end());
        return v;
        
            
    
    }
};