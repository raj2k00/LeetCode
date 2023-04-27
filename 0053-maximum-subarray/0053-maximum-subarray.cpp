class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxCurrent = 0;
        int maxGlobal = nums[0];
        
        for(int num : nums){
            maxCurrent = max(maxCurrent, 0) + num;          
            maxGlobal = max(maxCurrent, maxGlobal);
        }
        
        return maxGlobal;
        
    }
};