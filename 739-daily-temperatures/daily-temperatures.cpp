class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>ans(temperatures.size(), 0);
        for(int i = 0; i<temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;


    // this code can give O(n) t.c in the worst case
        // vector<int>answer;
        // int i = 0;
        // int j = i+1;
        // int store;
        // while(i<temperatures.size() && j<=temperatures.size()){
        //     if(j == temperatures.size()){
        //         answer.push_back(0);
        //         i++;
        //         j = i+1;
        //     }
        //     else if(temperatures[i] < temperatures[j]){
        //         if(j-i != 1){
        //             store = j-i;
        //             answer.push_back(store);
        //             i++;
        //             j = i+1;
        //         }
        //         else{
        //             store = j-i;
        //             answer.push_back(store);
        //             i++;
        //             j++;
        //         }
        //     }
        //     else if(temperatures[i] > temperatures[j]){
        //         j++;
        //     }
        // }
        // return answer;
    }
};