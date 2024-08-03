class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i = 0; i<asteroids.size(); i++){
            bool destroy = false; // initially nothing is destroyed
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()>0){
                    if((asteroids[i]<0 && st.top()<0)){
                        st.push(asteroids[i]);
                    }
                    else{
                        //Collision
                        if(abs(asteroids[i]) == st.top()){
                            destroy = true;
                            st.pop();
                            break;
                        }
                        else if(abs(asteroids[i]) > st.top()){
                            st.pop();
                            // st.push(asteroids[i]);
                        }
                        else{
                            destroy = true;
                            break;
                        }
                    }
                }
                if(!destroy){
                    st.push(asteroids[i]);
                }
            }
        }

        vector<int>ans(st.size());
        for(int i = st.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};