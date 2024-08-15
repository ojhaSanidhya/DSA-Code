class Solution {
public:
    int solution(vector<int>& nums, int start, int end){
        if(start == end) {
            return nums[start];
        }

        int maxLeftBorderSum = INT_MIN;
        int maxRightBorderSum = INT_MIN;

        int mid = start + (end-start)/2;
        int LeftValue = solution(nums,start,mid);
        int RightValue = solution(nums,mid+1,end);

        // Now we are finding maximum cross value
        //We stand at mid so first we go left from mid
        int LeftBorderSum = 0;
        for(int i = mid; i>=start; i--){
             LeftBorderSum = LeftBorderSum + nums[i];
            if(maxLeftBorderSum < LeftBorderSum) {maxLeftBorderSum = LeftBorderSum;}
        }

        //Now we go right from mid
        int RightBorderSum = 0;
        for(int i = mid+1; i<=end; i++){
             RightBorderSum = RightBorderSum + nums[i];
            if(maxRightBorderSum < RightBorderSum) {maxRightBorderSum = RightBorderSum;}
        }

        int crossSum = maxRightBorderSum + maxLeftBorderSum;
        return max(LeftValue,max(RightValue,crossSum));
    }
    int maxSubArray(vector<int>& nums) {
        //  TLE SOLUTION 
        // int ans = INT_MIN;
        // for(int i = 0; i<nums.size(); i++){
        //     int sum = 0;
        //     for(int j = i; j<nums.size(); j++){    
        //         sum = sum + nums[j];
        //         ans = max(ans,sum);
        //     }
        // }
        // return ans;


        // t.c = nlogn by divide and conqure approach.
        // int start = 0;
        // int end = nums.size()-1;
        // return solution(nums,start,end);

// 
        int sum = 0;
        int maxi = nums[0];
        for(int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
            maxi = max(maxi,sum);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};