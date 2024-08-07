class RecentCounter {
public:
queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        if(q.empty()){
            q.push(t);
            return q.size();
        }
        else{
            int x = t - 3000;
            while(!q.empty() && x > q.front()){
                q.pop();
            }
            q.push(t);
            return q.size();
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */