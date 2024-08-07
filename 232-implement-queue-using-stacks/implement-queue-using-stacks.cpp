class MyQueue {
public:
stack<int>st1;
stack<int>st2;
    MyQueue() {

    }
    
    void push(int x) {
        while(!st1.empty()){
            int digit = st1.top();
            st2.push(digit);
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()){
            int digit = st2.top();
            st1.push(digit);
            st2.pop();
        }
    }
    
    int pop() {
        int pop = st1.top();
        st1.pop();
        return pop;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */