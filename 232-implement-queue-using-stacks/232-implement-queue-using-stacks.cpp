class MyQueue {
public:
    
    stack<int>input , output;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        
        input.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        
        if(input.empty() == true && output.empty() == true)
        {
            return -1;
        }
        
        if(output.empty() == false){
            int val = output.top();
            output.pop();
            return val;
        }
        else
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            
            int val = output.top();
            output.pop();
            return val;
        }
        
    }
    
    /** Get the front element. */
    int peek() {
        
        if(input.empty() == true && output.empty() == true)
        {
            return -1;
        }
        
        if(output.empty() == false)
        {
            int val = output.top();
            return val;
        }
        else
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            
            return output.top();
        }
       
        
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        
        return input.empty() == true && output.empty() == true;
        
    }
};
