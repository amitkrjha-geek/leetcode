class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num)
        {
            if(num&1)num-=1;
            else num/=2;
            c++;
        }
        return c;
    }
};