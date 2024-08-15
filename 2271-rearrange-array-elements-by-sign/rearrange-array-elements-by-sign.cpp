class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>positive;
        vector<int>negative;
        for(int i = 0; i<size; i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int>newVector(size);
        int index = 0;
        for(int i = 0; i<size/2; i++){
            newVector[index] = positive[i];
            index++;
            newVector[index] = negative[i];
            index++;
        }
    nums = newVector;
    return nums;
    }
};