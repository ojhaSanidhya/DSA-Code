class Solution {
public:
// This is the question where we have to return the question, which gives an answer in inc. Order
// Given deck value doesn't provide the sol in incr. manner, it means we know the answer
// By the help of an ans we would make the question,
// For stoing ques we can make a vector, and for doing ope we can make a queue

    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        queue<int>q;
        vector<int>ques(deck.size());
        for(int i = 0; i<ques.size(); i++){
            q.push(i);
        }
        // Humko ans se quest banana hai

        for(int i = 0; i<deck.size(); i++){
            //step - 01
            ques[q.front()] = deck[i];
            q.pop();
            //step - 02
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ques;
    }
};