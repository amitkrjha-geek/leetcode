class Solution {
public:
    vector<vector<string>> partition(string s) {
     vector<vector<string>>ret;
        if(s.empty())return ret;
        vector<string>path;
        f(0,s,path,ret);
        return ret;
    }
    void f(int i,string&s,vector<string>&path,vector<vector<string>>&ret)
    {    if(i==s.size())
    {
        ret.push_back(path);
        return;
    }
        for(int j = i; j < s.size(); ++j) {
            if(isPalindrome(s, i, j)) {
                path.push_back(s.substr(i, j-i+1));
                f(j+1, s, path, ret);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};