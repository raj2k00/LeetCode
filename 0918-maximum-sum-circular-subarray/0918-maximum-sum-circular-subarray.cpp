class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int minCurrent = 0;
        int minGlobal = nums[0];
        
        int maxCurrent = 0;
        int maxGlobal = nums[0];
        
        int sum = 0;
        
        for(int num : nums){
            
            // maxSubArray
            
            maxCurrent = max(maxCurrent, 0) + num;
            maxGlobal = max(maxCurrent, maxGlobal);
            
            // minSubArray
            
            minCurrent = min(minCurrent, 0) + num;
            minGlobal = min(minCurrent, minGlobal);
            
            // update Sum
            
            sum += num;
        
        }
        
        return sum == minGlobal ? maxGlobal : max(maxGlobal, sum - minGlobal);
        
    }
};