class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontal, vector<int>& vertical) {
        sort(horizontal.begin(),horizontal.end());
        sort(vertical.begin(),vertical.end());
        long long maxh=horizontal[0],temp=0,maxv=vertical[0];
        
        for(int i=1;i<horizontal.size();i++){
            temp=horizontal[i]-horizontal[i-1];
            maxh=max(maxh,temp);
        }
        
        temp=h-horizontal[horizontal.size()-1];
        maxh=max(maxh,temp);
        
        temp=0;
        
        for(int i=1;i<vertical.size();i++){
            temp=vertical[i]-vertical[i-1];
            maxv=max(maxv,temp);
            cout<<temp<<endl;
        }
        temp=w-vertical[vertical.size()-1];
        maxv=max(maxv,temp);
        
        return (1LL*maxh*maxv) % 1000000007;
     
    }
};