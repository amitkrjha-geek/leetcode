class BrowserHistory {
public:
     stack<string>s1,s2;             
    int count1=0,count2=0;
    BrowserHistory(string homepage) {
        s1.push(homepage);
        count1++;
    }
    
    void visit(string url) {
        s1.push(url);
        count1++;
        while(!s2.empty()){
            s2.pop();
            count2--;   
        }
    }
    
    string back(int steps) {
        string s={};
        if(steps>count1-1){              
             while(!s1.empty()){
                 s2.push(s1.top());
                 s1.pop();
                 count2++;
                 count1--;
             }
            s1.push(s2.top());
            count1++;
            s2.pop();
            count2--;
            return s1.top();
        }
        else{
        while(steps--){
            s2.push(s1.top());
            s1.pop();
            count2++;
            count1--;
        }
        return s1.top();
        }
    }
    
    string forward(int steps) {
        string s={};
        if(steps>count2-1){
             while(!s2.empty()){
                 s=s2.top();
                 s1.push(s);
                 s2.pop();
                 count1++;
                 count2--;
             }
            return s1.top();
        }
        else{
        while(steps--){
            s1.push(s2.top());
            s2.pop();
            count1++;
            count2--;
        }
        return s1.top();
        }
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */