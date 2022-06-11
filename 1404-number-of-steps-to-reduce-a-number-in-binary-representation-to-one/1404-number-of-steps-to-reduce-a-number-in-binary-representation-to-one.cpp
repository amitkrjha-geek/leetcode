class Solution {
public:
    int numSteps(string s) {
        int count=0;
        while(s!="1")
        {
            if(s.back()=='0')
               {
                   s.pop_back();
                   
               }
            else
            {
                while(!s.empty()&&s.back()=='1')
                {
                    s.pop_back();
                    count++;
                }
                if(s.empty())return count+1;
                else if(!s.empty())
                {
                    s.back()='1';
                }
            }
                            count++;

        }
        return count;
    }
};