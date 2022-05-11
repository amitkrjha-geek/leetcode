// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	    map<int,int>mp;
		for(int i = 0; i < nums.size(); i++){
			mp[nums[i]]++;
		}
		int cnt = 0;
		// difference equal to zero
		if(k == 0){
			for(auto i: mp){
				// frequency of element is greater than one then distinct pair is possible
				if(i.second > 1)
					cnt++;
			}
		}
		// difference is not equla to zero
		else{
			for(auto i: mp){
				// frequency of element + k is not zero then distinct pair is possible
				if(mp.find(i.first + k) != mp.end()){
					cnt++;
				}
			}
		}
		return cnt; 
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends