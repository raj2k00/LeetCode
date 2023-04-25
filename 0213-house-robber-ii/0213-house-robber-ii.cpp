class Solution {
public:
    
    int MaxRob(int l, int h, vector<int>arr){
        
        int oneStepBack = 0;
        int twoStepBack = 0;
        
        int maxAmountRobbed = 0;
        
        for(int i = l; i < h; i++){
            
            maxAmountRobbed = max( twoStepBack + arr[i] , oneStepBack);
            twoStepBack = oneStepBack;
            oneStepBack = maxAmountRobbed;
            
        }
        
        return maxAmountRobbed;
        
    }
    
    
    int rob(vector<int>& nums) {
        
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        return max(MaxRob(0, nums.size() - 1, nums), MaxRob(1, nums.size(), nums));
        
    }
};