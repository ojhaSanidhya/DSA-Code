class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        vector<int>v;
        while(i<nums.size()){
            if(i==0){
            nums[i] = nums[0];
            i++;
            j++;
            }
            else if(nums[i] != nums[i-1]){
            nums[j] = nums[i];
            i++;  
            j++;
            }
            else{
                i++;
            }
        }
        return j;
    }
};