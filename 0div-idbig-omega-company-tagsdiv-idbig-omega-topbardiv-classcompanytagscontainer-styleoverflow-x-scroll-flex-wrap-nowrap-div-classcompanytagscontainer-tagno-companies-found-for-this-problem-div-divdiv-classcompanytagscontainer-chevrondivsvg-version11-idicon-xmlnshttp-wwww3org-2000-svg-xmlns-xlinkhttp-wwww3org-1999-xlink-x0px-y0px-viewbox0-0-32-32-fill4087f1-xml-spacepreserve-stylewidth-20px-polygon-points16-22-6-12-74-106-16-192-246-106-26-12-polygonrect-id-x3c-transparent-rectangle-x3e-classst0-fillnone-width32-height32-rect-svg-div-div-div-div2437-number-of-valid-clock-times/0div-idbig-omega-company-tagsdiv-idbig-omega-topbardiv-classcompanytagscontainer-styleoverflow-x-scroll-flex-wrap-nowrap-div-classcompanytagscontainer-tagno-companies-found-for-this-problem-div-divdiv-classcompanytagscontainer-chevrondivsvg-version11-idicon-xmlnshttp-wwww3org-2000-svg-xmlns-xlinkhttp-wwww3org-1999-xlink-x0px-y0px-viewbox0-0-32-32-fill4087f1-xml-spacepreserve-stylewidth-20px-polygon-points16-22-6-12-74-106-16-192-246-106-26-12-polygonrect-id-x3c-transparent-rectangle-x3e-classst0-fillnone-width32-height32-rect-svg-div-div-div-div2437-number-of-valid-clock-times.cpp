class Solution {
public:
    int countTime(string time) {
        string hr=time.substr(0,2);
        string min=time.substr(3,2);
        int a=1,b=1;
        if(hr[0]=='?'&&hr[1]=='?')a=24;
        else if(hr[0]=='?'&&hr[1]<='3')a=3;
        else if(hr[0]=='?'&&hr[1]>'3')a=2;
        else if(hr[0]<='1'&&hr[1]=='?')a=10;
        else if(hr[0]=='2'&&hr[1]=='?')a=4;
        
        if(min[0]=='?'&&min[1]=='?')b=60;
        else if(min[0]=='?')b=6;
        else if(min[1]=='?')b=10;
        return a*b;
        
    }
};