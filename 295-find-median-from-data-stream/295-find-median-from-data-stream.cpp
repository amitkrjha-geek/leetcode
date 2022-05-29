class MedianFinder {
    priority_queue<int> lows;
    priority_queue<int, vector<int>, greater<int>> highs;
public:
    MedianFinder() {}
    
    void addNum(int val) {
        if (lows.empty() || val < lows.top()) lows.push(val);
        else highs.push(val);
        if (lows.size() < highs.size()) {
            lows.push(highs.top());
            highs.pop();
        }
        else if (lows.size() > highs.size() + 1) {
            highs.push(lows.top());
            lows.pop();
        }
    }
    
    double findMedian() {
        return lows.size() > highs.size() ? lows.top() : (lows.top() + highs.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */