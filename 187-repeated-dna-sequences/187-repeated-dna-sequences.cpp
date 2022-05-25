class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
         vector<string> res;
        unordered_map<string,int> m;
        for(int i = 0; i+9 < s.length(); i++){
            string temp = s.substr(i,10);
            m[temp]++;
        }
        for(auto val : m){
            if(val.second > 1){
                res.push_back(val.first);
            }
        }
        return res;
    }
};