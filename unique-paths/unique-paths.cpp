class Solution {
public:
    int uniquePaths(int m, int n) {
      long long int ans = 1;
        if(m>n) return uniquePaths(n,m);
        
        for(int i=0;i<m-1;i++){
            ans = (ans*(m+n-2 - i))/(i+1);
        }
        return ans;
    }
};