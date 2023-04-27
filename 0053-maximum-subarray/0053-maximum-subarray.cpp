class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxCurrent = 0;
        int maxGlobal = INT_MIN;
        
        for(int i = 0; i < nums.size (); ++i){
            
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