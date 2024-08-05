class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        //step-01
        for(int i = 0; i<k; i++){
            int ele = nums[i];
            while(!dq.empty() && nums[dq.back()] < ele){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        // Step-02
        for(int i = k; i<nums.size(); i++){
            if(!dq.empty()){
                ans.push_back(nums[dq.front()]);
            }
            {
                // check removal
                if(i - dq.front() >= k){
                    // out of range
                    dq.pop_front();
                }
                int ele = nums[i];
                while(!dq.empty() && nums[dq.back()] < ele){
                    dq.pop_back();
                }
                //Addition
                dq.push_back(i);
            }
        }
        if(!dq.empty()){
            ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};