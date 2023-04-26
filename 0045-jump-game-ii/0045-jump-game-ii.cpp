class Solution {
public:
    int jump(vector<int>& nums) {
        
        int currentFar = 0;
        int currentEnd = 0;
        int ans = 0;
        int i = 0;
        int n = int(nums.size());
        
        
        for(i ; i < n - 1; i++){
            
            currentFar = max( i + nums[i] , currentFar);
            
            if(i == currentEnd){
                ans++; 
                currentEnd = currentFar;
            }
            
            
        }
        
        return ans;
        
    }
};