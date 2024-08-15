class Solution {
public:
    int majorityElement(vector<int>& nums) {
    // bruteForce Approach
        // int n = nums.size();
        // int length = n/2;

        // int count = 0;
        // for(int i = 0; i<n; i++){
        //     for(int j = i; j<n; j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //         if(count>length){
        //             return nums[i];
        //         }
        //     }
        //     count = 0;
        // }
        // return -1;

    // better Sol
        map<int,int>freq;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto i:freq){
            if(i.second > (nums.size()/2)){
                return i.first;
            }
        }
        return -1;
    }
};