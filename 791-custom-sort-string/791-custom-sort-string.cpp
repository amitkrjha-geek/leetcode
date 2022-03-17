class Solution {
public:
    static string St;
    static bool customsort(char c1,char c2)
    {
        return (St.find(c1)<St.find(c2));
    }
    string customSortString(string S, string T) {
        St=S;
        
        sort(T.begin(),T.end(),customsort);
        return T;
    }
};
string Solution :: St;