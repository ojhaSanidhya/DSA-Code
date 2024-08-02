class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string ans;
        for(int i = 0; i<num.size(); i++){
            char digit = num[i];
            if(k>0){
                while(!st.empty() && st.top() > digit){
                    st.pop();
                    k--;
                    if(k == 0){
                        break;
                    }
                }
            }
            st.push(digit);
        }

        if(k>0){
            while(!st.empty() && k != 0){
                st.pop();
                k--;
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        while(ans.size()>0 && ans.back() == '0'){
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());

        if(ans != ""){
            return ans;
        }
        else{
            ans.push_back('0');
            return ans;
        }
    }
};