// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
     unordered_map<int, int> mp;
    int i = 0; 
    int j = 0;
    int n = S.length();
    int ans = 0;
    while(i < n){
        mp[S[i]]++;
        while(mp[S[i]] > 1){
            mp[S[j]]--;
            j++;
        }
        ans = max(i - j + 1, ans);
        i++;
    }
    return ans;
}