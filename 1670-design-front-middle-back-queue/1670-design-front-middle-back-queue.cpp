class FrontMiddleBackQueue {
public:
   vector<int> v;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        v.insert(v.begin(), val);
    }
    
    void pushMiddle(int val) {
        if(v.size() == 0) {
            v.push_back(val);
            return;
        }
        int pos = v.size()/2;
        v.insert(v.begin()+pos, val);
    }
    
    void pushBack(int val) {
        v.push_back(val);
    }
    
    int popFront() {
        if(isEmpty()) return -1;
        int front = v[0];
        v.erase(v.begin());
        return front;
    }
    
    int popMiddle() {
        if(isEmpty()) return -1;
        int pos = v.size()/2;
        if(v.size() % 2 == 0) pos -= 1; 
        int middle = v[pos];
        v.erase(v.begin()+pos);
        return middle;
    }
    
    int popBack() {
        if(isEmpty()) return -1;
        int last = v.back();
        int pos = v.size();
        v.erase(v.begin()+pos-1);
        return last;
    }
    bool isEmpty(){
        return v.size() == 0;
    }
};



/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */