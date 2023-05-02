class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int product = 1;
        
        for(int num : nums ){
            if(num > 0){
                product *= 1;
            }
            
            if(num == 0){
                return 0;
            }
            
            if(num < 1){
                product *= -1;
            }
        }
        
        return product;
        
    }
};