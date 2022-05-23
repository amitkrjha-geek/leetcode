class Solution {
public:
    vector<string>res;
     vector<string>v= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void helper(string d, int i, string path)
    {
        if(i==d.length())
        {
            res.push_back(path);
            return;
        }
        string s=v[d[i]-'0'];
        for(int j=0;j<s.length();j++)
        {
            helper(d,i+1,path+s[j]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        helper(digits,0,"");
        return res;
    }
};