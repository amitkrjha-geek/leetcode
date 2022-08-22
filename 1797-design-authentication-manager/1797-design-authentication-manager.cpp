class AuthenticationManager {
public:
    map<string,int>m;
    int ttl;
    AuthenticationManager(int t) {
        ttl=t;
    }
    
    void generate(string tokenId, int currentTime) {
        m[tokenId]=currentTime+ttl;
    }
    
    void renew(string tokenId, int currentTime) {
        if(m[tokenId])
        {
            if(m[tokenId]>currentTime&&currentTime+ttl>m[tokenId])
            {
                m[tokenId]=currentTime+ttl;
            }
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int c=0;
        for(auto it:m)
        {
            if(it.second>currentTime)c++;
        }
        return c;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */