class Solution {
public:
    string s;
    void helper(vector<int>& vec,vector<int>& temp,int& k,int idx)
    {
        if(idx == vec.size())
        {
            k--;
            s = "";
            if(k == 0)
            {
                for(int i = 0;i<vec.size();i++)
                {
                    s += to_string(temp[i]);
                } 
            }
            return;
        }
        if(k == 0)
        {
            return;
        }
        
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i] > 0)
            {
                temp[idx] = vec[i];
                vec[i] = -1*vec[i];
                helper(vec,temp,k,idx+1);
                vec[i] = -1*vec[i];
                temp[idx] = 0;
            }
        }
        
    }
    
    string getPermutation(int n, int k) {
        vector<int> vec(n,0);
        for(int i=1;i<=n;i++)
        {
            vec[i-1] = i;
        }
        
        vector<int> temp(n,0);
        helper(vec,temp,k,0);
        return s;
    }
};