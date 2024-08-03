class BrowserHistory {
    stack<string>BrowserStack;
    stack<string>fwdStack;
public:
    BrowserHistory(string homepage) {
        BrowserStack.push(homepage);
    }
    
    void visit(string url) {
        BrowserStack.push(url);
        while(!fwdStack.empty()){
            fwdStack.pop();
        }
    }
    
    string back(int steps) {
        while(steps--){
            if(BrowserStack.size() > 1){
                fwdStack.push(BrowserStack.top());
                BrowserStack.pop();
            }
            else{
                // Only homepage is present
                // back not present
                break;
            }
        }
        return BrowserStack.top();
    }
    
    string forward(int steps) {
        while(steps--){
            if(!fwdStack.empty()){
                BrowserStack.push(fwdStack.top());
                fwdStack.pop();
            }
            else{
                // forward is empty
                break;
            }
        }
        return BrowserStack.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */