class Solution {
public:
    int ladderLength(string b, string e, vector<string>& wordList) {
           unordered_set<string>dict;
        queue<pair<string,int>>q;
        for(int i=0;i<wordList.size();i++)
        {
            dict.insert(wordList[i]);
        }
        q.push({b,1});
        while(!q.empty())
        {
            pair<string,int>node=q.front();
            q.pop();
            if(node.first==e)
            {
                return node.second;
            }
            for(int i=0;i<node.first.length();i++)
            {
                string tmp=node.first;
                for(char c='a';c<='z';c++)
                {
                    char x=tmp[i];
                    tmp[i]=c;
                    if(dict.find(tmp)!=dict.end())
                    {
                        q.push({tmp,node.second+1});
                        dict.erase(tmp);
                    }
                }
            }
        }
        return 0;
    }
};
    