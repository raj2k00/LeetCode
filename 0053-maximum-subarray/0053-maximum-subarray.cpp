class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxGlobal = INT_MIN;
        int maxCurrent = 0;
        
        for(int i = 0; i < n; i++){
            maxCurrent = maxCurrent + nums[i];
            if(maxCurrent > maxGlobal){
                maxGlobal = maxCurrent;
            }
            if(maxCurrent < 0){
                maxCurrent = 0;
            }
        }
        
        return maxGlobal;
        
    }
};