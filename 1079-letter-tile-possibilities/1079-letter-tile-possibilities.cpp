class Solution {
public:
    set<string> s;
    void solve(string& str, string& t, set<int> &ns)
    {
        s.insert(str);
        for(int i=0; i<t.size(); i++)
        {
            if(ns.find(i)!=ns.end()) continue;
            str+=t[i];
            ns.insert(i);
            solve(str,t,ns);
            str.pop_back();
            ns.erase(i);
        }
    }
    int numTilePossibilities(string t) {
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++)
        {
            if(i && t[i]==t[i-1]) continue;
            set<int> ns;
            ns.insert(i);
            string k; k+=t[i];
            solve(k,t,ns);
        }
        return s.size();
    }

};