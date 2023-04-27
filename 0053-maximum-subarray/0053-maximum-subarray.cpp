class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxCurrent = nums[0];
        int maxGlobal = nums[0];
        
        for(int i = 1; i < nums.size (); ++i){
            
            if(maxCurrent < 0){
                maxCurrent = 0;
            }
                        
            maxCurrent = maxCurrent + nums[i];
                    

            
            maxGlobal = max(maxGlobal, maxCurrent);

        }
        
        return maxGlobal;
        
    }
};