class MyCircularQueue {
public:

    vector<int>q;
    int capacity;
    int curr_size;
    int front;
    int rear;
    MyCircularQueue(int k){
         capacity = k;
         q.resize(k , -1);
         curr_size = 0;
         rear = -1;
         front = 0;
        
    }
    
    
    bool enQueue(int value) {
         if(isFull()) return false;
         rear = (rear + 1)%capacity;
         q[rear] = value;
         curr_size++;
         return true;
        
         
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front + 1)%capacity;
        curr_size--;
        return true;
        
    }
    
    int Front() {
        
        if(isEmpty()) return -1;
        
        return q[front];
        
        
    }
    
    int Rear() {
        
        if(isEmpty()) return -1;
        
        return q[rear];
        
    }
    
    bool isEmpty() {
        
        return curr_size == 0;
        
    }
    
    bool isFull() {
        
        return curr_size == capacity;
        
    }
};

