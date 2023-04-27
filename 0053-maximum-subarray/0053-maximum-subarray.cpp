class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int globalMax = nums[0];
        int maxSoFar = nums[0];
        
        for(int i=1;i<nums.size();i++){
            if (maxSoFar < 0){
                maxSoFar = 0;
            }
            maxSoFar += nums[i];
            globalMax = max(globalMax, maxSoFar);
        }
        
        return globalMax;
        
    }
};