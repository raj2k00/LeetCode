class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int minCurrent = 0;
        int minSum = nums[0];
        
        int maxCurrent = 0;
        int maxSum = nums[0];
        
        int sum = 0;
        
        for(int num : nums){
            
            // maxSubArray
            
            maxCurrent = max(maxCurrent, 0) + num;
            maxSum = max(maxCurrent, maxSum);
            
            // minSubArray
            
            minCurrent = min(minCurrent, 0) + num;
            minSum = min(minCurrent, minSum);
            
            // update Sum
            
            sum += num;
        
        }
        
        return sum == minSum ? maxSum : max(maxSum, sum - minSum);
        
    }
};