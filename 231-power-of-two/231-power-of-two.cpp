class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0||n<0)return false;
      double a;
        a=log2(n);
        int l=a;
        if(a-l>0)return false;
        return true;
    }
};