typedef pair<long long,pair<long long,long long>> ppi;
class Solution {
public:
	int nthSuperUglyNumber(int n, vector<int>& primes) {
		priority_queue<ppi,vector<ppi>,greater<ppi>>minh; // min heap of pairs {values, prime No, index of dp}
		long long dp[n];
		dp[0]=1;                                         // 1 is the first ugly number
		for(auto &i:primes)
		{
			minh.push({i,{i,0}});   // {value,{prime No,index}}
		}
		for(int i=1;i<n;)
		{
			auto it = minh.top();   
			minh.pop(); 
			long long prime = it.second.first;    // current prime no. 
			long long ind = it.second.second;     // index 
			long long val = it.first;             // next minimum ugly number (prime no. * dp[ind])
			if(dp[i-1] != val)dp[i++] = val;      // to not allow repeatation of same ugly number
			ind++;                                // incrementing the index 
			it.second.second = ind;           
			it.first = prime*dp[ind];             // the updated value
			minh.push(it);                        // inserting in heap after updating
		}
		return dp[n-1];                           // returning nth ugly number
	}
};