class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0; i<s.length(); i++){
            char ch = s[i];
            if(ch == 'a'){
                st.push(ch);
            }
            else if(!st.empty() && ch == 'b'){
                if(st.top() == 'a'){
                    st.pop();
                    st.push(ch);
                }
                else{
                    return false;
                }
            }
            else{
                if(!st.empty() && st.top() == 'b'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};