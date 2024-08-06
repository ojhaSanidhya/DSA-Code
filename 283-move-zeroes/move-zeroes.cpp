class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(i<nums.size() && j<=i && j<nums.size()){
            if(nums[i] == 0){
                i++;
            }
            else if(nums[i] != 0 && nums[j] == 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else{
                i++;
                j++;                
            }
        }
    }
};