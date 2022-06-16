class Solution {
public:
    int minFlips(int a, int b, int c) {
       // int d=a|b;
        int ans=0;
        for(int i=0;i<32;i++)
        {
          long long int mask = (1 << i) ; 
            
            int a_bit = (a & mask)?1:0;
            int b_bit = (b & mask)?1:0;
            int c_bit = (c & mask)?1:0;
          //  cout<<a_bit<<" "<<b_bit<<" "<<c_bit<<endl;
            if((a_bit | b_bit) == c_bit)ans+=0;
            if((a_bit | b_bit) != c_bit)
            {
                if((a_bit == c_bit) || (b_bit == c_bit)){
                    ans++ ; continue;}
                if(a_bit == 1 &&  b_bit == 1 && c_bit == 0 )
                {ans+=2 ; continue;}
                else{ 
                   // cout<<i<<" ";
                    ans++;
                }
            }
        }
        return ans;
    }
};