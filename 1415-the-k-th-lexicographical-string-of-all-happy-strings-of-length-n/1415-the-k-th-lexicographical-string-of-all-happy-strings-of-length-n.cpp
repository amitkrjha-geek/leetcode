class Solution {
public:
  set<string>st;
    
   void recurs(char prev,int n,string res)
    {
        
        if(n<=0)
        {
            st.insert(res);
            return ;
        }
        
        
        string s=res;
        if(prev!='a')
        {
            s+='a';
            recurs('a',n-1,s);
        }
        s=res;//backtracking step
        if(prev!='b')
        {
              s+='b';
              recurs('b',n-1,s);
            
        }
        s=res;//backtracking step
        if(prev!='c')
        {
              s+='c';
              recurs('c',n-1,s);
        }
    }
    
    
    
    
    string getHappyString(int n, int k) {
        string a="";
        recurs('\0',n,a);
        
        if(k>st.size())
        {
            return "";
        }
        
        for(auto x:st)
        {
            if(k==1)
            {
                return x;
            }
            k--;
        }
        return "";
    }
};
