class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n==0||n<0)return false;
      double a= (log10(n)/log10(3));
        int l=a;
        if(a-l>0)return false;
        return true;
    }
};