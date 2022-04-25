class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        stack<string>st;
        string word;
        
        while(str>>word)
        {
            st.push(word);
        }
        string h;
        int c=st.size();
        while(!st.empty())
        {
            h+=st.top();
            st.pop();
            if(c==1)continue;
            h+=" ";
            c--;
        }
        return h;
        
    }
};