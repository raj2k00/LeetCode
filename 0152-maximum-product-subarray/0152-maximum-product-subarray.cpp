class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxProduct = 1;
        int minProduct = 1;
        
        int maxGlobal = INT_MIN;
        
        for(int num : nums){
            
            if(num < 0){
                swap(maxProduct, minProduct);
            }
            
            maxProduct = max(maxProduct * num , num);
            minProduct = min(minProduct * num, num);
            
            maxGlobal = max(maxProduct, maxGlobal);
        
        }
        
        return maxGlobal;     
        
    }
};