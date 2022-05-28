class Solution {
public:
    void backtrack(string tiles, int level, int &count)
    {
        count++;
        for(int i=level; i<tiles.length(); i++){
            
            if(i!=level && tiles[i]==tiles[level])
                continue;   // to skip same characters
            swap(tiles[i], tiles[level]);
            backtrack(tiles, level+1, count);
        }
    }
    int numTilePossibilities(string t) {
        int c=0;
        sort(t.begin(),t.end());
        backtrack(t,0,c);
        return c-1;
    }

};