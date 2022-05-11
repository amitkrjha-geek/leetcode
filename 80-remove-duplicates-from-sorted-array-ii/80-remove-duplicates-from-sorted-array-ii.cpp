class Solution {
public:
    int removeDuplicates(vector<int>&A) {
      int  n=A.size(); 
        if (n <= 2) return n;

            int i = 1, j = 1;
            int cnt = 1;
            while (j < n) {
                if (A[j] != A[j-1]) {
                    cnt = 1;
                    A[i++] = A[j];
                }
                else {
                    if (cnt < 2) {
                        A[i++] = A[j];
                        cnt++;
                    }
                }
                ++j;
            }
            return i;
       
        
    }
};