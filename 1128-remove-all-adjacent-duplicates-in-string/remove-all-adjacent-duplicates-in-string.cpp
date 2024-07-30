class Solution {
public:
    string removeDuplicates(string s) {
    //     string temp = "";
    //     int i = 0;
    //     while(i < s.length()){
    //         //same
    //         //temp ka rightmost character and string s ka current character
    //         if(temp.length()>0 && s[i]==temp[temp.length()-1]){
    //             //temp from ans string
    //             temp.pop_back();
    //         }
    //         else{
    //             //push
    //             temp.push_back(s[i]);
    //         }
    //         i++;
    //     }
    //     return temp;

    // Both code is correct.

    // string temp = "";
    // for(int i = 0; i<s.size(); i++){
    //     if(temp.size()<1){
    //         temp.push_back(s[i]);
            
    //     }
    //     else{
    //         if(s[i]==temp[temp.size()-1]){
    //             temp.pop_back();
                
    //         }
    //         else{
    //             temp.push_back(s[i]);
                
    //         }
    //     }
    // }
    // return temp;

    // One more code with the help of stack

    stack<char>st;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        if(st.empty() || s[i] != st.top()){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    string temp;
    while(!st.empty()){
        temp.push_back(st.top());
        st.pop();
    }
    reverse(temp.begin(), temp.end());
    return temp;
}
};