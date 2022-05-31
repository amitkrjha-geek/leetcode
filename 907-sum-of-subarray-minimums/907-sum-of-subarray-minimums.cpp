class Solution {
public:
 
    int mod = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];
         
        int left_smaller[n], right_smaller[n];
        
        // for every element find next smaller in right
        stack<int> st;
        st.push(0);
        for(int i = 1; i<n; i++){
            if(arr[i] <= arr[st.top()]){
                while(!st.empty() && arr[i] <= arr[st.top()]){
                    right_smaller[st.top()] = i;
                    st.pop();
                }
            }
            st.push(i);
        }
        
        while(!st.empty()){
            right_smaller[st.top()] = n;
            st.pop();
        }
        
        // for every element find next smaller on left
        
        st.push(n-1);
        for(int i = n-2; i>=0; i--){
            if(arr[i] < arr[st.top()]){
                while(!st.empty() && arr[i] < arr[st.top()]){
                    left_smaller[st.top()] = i;
                    st.pop();
                }
            }
            st.push(i);
        }
        
        while(!st.empty()){
            left_smaller[st.top()] = -1;
            st.pop();
        }
        
        long ans = 0;
        for(int i =0 ; i<n; i++){
            ans =(ans + (long)(i - left_smaller[i]) * (right_smaller[i] - i) * arr[i]) % mod;
        }
        return ans;
    }
};