class Solution {
public:
    void countFreq(string s, int &G, int &P, int &M){
        for(int i=0;i<s.length();i++){
            if(s[i]=='G') G++;
            else if(s[i]=='M') M++;
            else if(s[i]=='P') P++;
        }
    }
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size();
        int t=travel.size();
        int G=0,P=0,M=0;
        countFreq(garbage[n-1],G,P,M);
        
        for(int i=n-2;i>=0;i--){
            if(G!=0) G += travel[i];
            if(M!=0) M += travel[i];
            if(P!=0) P += travel[i];
            
            countFreq(garbage[i],G,P,M);
        }
        return G+M+P;
    }
            
            
       
};