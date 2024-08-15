class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     int size = nums.size();
    //     for(int i = 0; i<size; i++){
    //         for(int j = i+1; j<size; j++){
    //             if(nums[i]+nums[j] == target){
    //                 return 1;
    //             }    
    //         }
    //     }

        vector<int>v;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                break;
                }
            }
            if(v.size()==2){
                break;
            }
        }
        return v;
    }
};