class Solution {
public:
	// Custom structures for max & min heaps
    struct maxstruct{
        bool operator()(pair<double,double>& a, pair<double,double>& b){
            return a.second<b.second;
        }  
    };
    struct minstruct{
        bool operator()(pair<double,double>& a, pair<double,double>& b){
            return a.second>b.second;
        }  
    };
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<double> result;
		
		//max_heap for left half and min_heap for right half
        priority_queue<pair<double,double>, vector<pair<double,double>>, maxstruct> max_heap;
        priority_queue<pair<double,double>, vector<pair<double,double>>, minstruct> min_heap;
        
		//Initialize both Heaps
        for(int i=0; i<k; i++)
            max_heap.push({i, nums[i]});
        
        while(max_heap.size()>min_heap.size()+1){
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
            
        for(int i=k; i<n; i++){
		
			// Store median into result for previous window
            if(k%2==0){
                double ans=max_heap.top().second + min_heap.top().second;
                ans/=2;
                result.push_back(ans);
            }
            else
                result.push_back(max_heap.top().second);
            
			// Main Part
            double outgoing=nums[i-k], incoming=nums[i], balance=0;
            // Balance for outgoing element
            if(outgoing<max_heap.top().second || (outgoing==max_heap.top().second && max_heap.top().first<=i-k) || (!min_heap.empty() && outgoing<min_heap.top().second))
                balance--;
            else
                balance++;
            
			// Balance for incoming element
            if(incoming<max_heap.top().second || (incoming==max_heap.top().second && max_heap.top().first>i-k) ||(!min_heap.empty() && incoming<min_heap.top().second)){
                balance++;
                max_heap.push({i, incoming});
            }
            else{
                balance--;
                min_heap.push({i, incoming});
            }
            
			// Check Balance
            if(!min_heap.empty() && balance<0){
                max_heap.push(min_heap.top());
                min_heap.pop();
                balance++;
            }
            else if(!max_heap.empty() && balance>0){
                min_heap.push(max_heap.top());
                max_heap.pop();
                balance--;
            }
            
			// Lazy Removal when out of window range element at the top
            while(!min_heap.empty() && min_heap.top().first<=i-k)
                min_heap.pop();
            
            while(!max_heap.empty() && max_heap.top().first<=i-k)
                max_heap.pop();
        }
        
			// Store median into result for last window
            if(k%2==0){
                double ans=max_heap.top().second + min_heap.top().second;
                ans/=2;
                result.push_back(ans);
            }
            else
                result.push_back(max_heap.top().second);
        
        return result;
    }
};