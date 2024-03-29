class MedianFinder {
public:
    priority_queue<int>firstQ;
    priority_queue<int , vector<int> , greater<int>>secQ;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        
        if(firstQ.empty() || firstQ.top() > num ) firstQ.push(num);
        else secQ.push(num);
        
         if(firstQ.size() > (secQ.size()+1))
        {
            secQ.push(firstQ.top());
            firstQ.pop();
        }
        else if(firstQ.size()+1<secQ.size())
        {
            firstQ.push(secQ.top());
            secQ.pop();
        }
        
    }
    
    double findMedian() {
        
        if(firstQ.size() == secQ.size()) return (firstQ.top() + secQ.top())/2.0;
        else return firstQ.size() > secQ.size() ? firstQ.top() : secQ.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */