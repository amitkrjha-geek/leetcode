class Solution {
public:
    int digitSqSum(int n)
    {
          int sum=0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
      
	if (n == 1) return true;
	else if (n == 4) return false;
	else return isHappy(digitSqSum(n));
}	
     
};