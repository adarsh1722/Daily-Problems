class MinStack {
    stack<long long >st;
    long long mini;
public:
    MinStack() {
        
       
    }
    
    void push(int val) {
        
        long long value = val;
        if(st.empty()){
            mini = val;
            st.push(val);
        }
        else{
            if(val <= mini){
                st.push((long long) 2*val - mini);
                mini = val;
            }
            else{
                st.push(val);
            }
        }
        
    }
    
    void pop() {
        
        if(st.empty()) return;
        long long el = st.top();
        st.pop();
        if(el <= mini){
           mini = (long long )2*mini - el; 
        }
        
        
    }
    
    int top() {
           
        if(st.empty()) return -1;
        long long el = st.top();
        if(el <= mini) return mini;
        else return el;
    }
    
    int getMin() {
        
        return mini;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */