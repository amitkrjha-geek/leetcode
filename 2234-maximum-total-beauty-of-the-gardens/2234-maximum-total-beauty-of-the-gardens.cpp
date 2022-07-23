class Solution {
public:
    #define ll long long int
    long long maximumBeauty(vector<int>& a, long long newFlowers, int target, int full, int partial) {
        
        	sort(a.begin(), a.end());
		ll n = a.size();
		vector<ll> prefix(n, 0);
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			prefix[i] = sum;
		}

		// end se leke i tak sabko complete kar denge
		ll ans = 0;
		for (int i = n; i >= 0; i--) {
			// from n - 1 till i, all the gardens are complete (means all of them have >= target number of flowers)

			if (i < n) {
				ll toAdd = max(0, target - a[i]);
				if (newFlowers < toAdd) break;
				newFlowers -= toAdd;
				a.pop_back();
			}

			ll low = 0, high = target - 1;
			// the minimum incomplete garden value will lie between 0 and target - 1 obviously

			ll currentPartialBeauty = 0;
			ll currentFullBeauty = (ll)((n - i) * full);
			while (low <= high) {
				ll mid = low + (high - low) / 2;
				// mid is the candidate for the minimum guy in the array

				int idx = upper_bound(a.begin(), a.end(), mid) - a.begin(); // index of the first guy which is strictly greater than mid
				// we intend to make every guy which comes before this equal to mid
				//

				if (idx == 0) {
					low = mid + 1;
					// in this case there are no elements behind mid, means no element can be made  == mid
					// means all the values are greater than 1
				} else {
					ll needed = (ll)mid * idx - (ll)prefix[idx - 1];
					// needed represents the number of flowers needed to make the minimum element in the array equal to mid
					// basically all the elements before idx will be set equal to mid. the array is increasing, so all the guys after idx -1
					// will be greater than mid (idx was the upper_bound index), so mid will be the minimum element in the array definitely

					// if the number of flowers needed to make mid as the minimum is more than what we have, then we have to look for a lesser value of mid (as that would need lesser number of flowers to achieve)
					// in case we have sufficient number of flowers, we will search for a higher value of the minimum element
					if (needed <= newFlowers) {
						currentPartialBeauty = mid * partial;
						low = mid + 1;
					} else high = mid - 1;
				}

			}

			ans = max(ans, currentPartialBeauty + currentFullBeauty);

		}

		return ans;
        
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
};