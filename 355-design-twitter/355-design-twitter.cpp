class Twitter {
public:
    map<int,set<int>>m;
    vector<pair<int,int>>tweet;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweet.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>feed;
        int c=0;
        for(int i=tweet.size()-1;i>=0;i--)
        { 
            if(c==10)return feed;
            if(userId==tweet[i].first||m[userId].find(tweet[i].first)!=m[userId].end())
            {
                feed.push_back(tweet[i].second);
                c++;
            }
        }
        return feed;
    }
    
    void follow(int forId, int folId) {
        m[forId].insert(folId);
        //m[folId].insert(forId);
    }
    
    void unfollow(int forId, int folId) {
        m[forId].erase(folId);

    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */