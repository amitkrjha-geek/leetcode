class Solution {

public:
int leastInterval(vector<char>& tasks, int n) {
    
    unordered_map<char,int>counter;
    for(auto task:tasks){
        counter[task]++;
    }
    
    
    priority_queue<int>pq;
    for(auto x:counter)
        pq.push(x.second);
    
    int cycle=n+1;
    int time=0;
    while(!pq.empty()){
        vector<int>v;
        int i=0;
        for(i=0;i<cycle;i++){
            if(pq.empty()) break;
            v.push_back(pq.top());
            pq.pop();
        }
        for(int j=0;j<v.size();j++){
            if(v[j]-1)
                pq.push(v[j]-1);
        }
           
    time+=!pq.empty()?cycle:i;    
    }
    return time;
}
    
};