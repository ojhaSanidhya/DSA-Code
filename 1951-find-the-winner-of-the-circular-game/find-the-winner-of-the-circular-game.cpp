class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i = 1; i <= n; i++){
            q.push(i);
        }
        int count = 0;
        while(q.size() != 1){
            int val = q.front();
            q.pop();
            count++;
            if(count != k){
                q.push(val);
            }
            else{
                count = 0;
            }
        }
        return q.front();
    }
};