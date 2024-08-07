class MyStack {
public:
queue<int>q1;
queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            int digit = q1.front();
            q2.push(digit);
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            int digit = q2.front();
            q1.push(digit);
            q2.pop();
        }
    }
    
    int pop() {
        int digit = q1.front();
        q1.pop();
        return digit;
    }
    
    int top() {
        int digit = q1.front();
        return digit;
    }
    
    bool empty() {
        if(q1.empty() && q2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */