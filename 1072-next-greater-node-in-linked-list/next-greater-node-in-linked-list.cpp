/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        stack<int>st;
        st.push(0);

        vector<int>ans;
        for(int i = v.size()-1; i>=0; i--){
            while(!st.empty() && v[i]>=st.top()){
                if(st.top()!=0){
                    st.pop();
                }
                else{
                    break;
                }
            }
            ans.push_back(st.top());
            st.push(v[i]);
            // if(!st.empty()){
            //     ans.push_back(st.top());
            //     st.push(v[i]);
            // }
            // if(st.empty()){
            //     ans.push_back(0);
            //     st.push(v[i]);
            // }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};