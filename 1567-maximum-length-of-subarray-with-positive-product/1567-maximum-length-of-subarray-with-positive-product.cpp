class Solution {
public:
    int getMaxLen(vector<int>& nums) {

        int ans = 0;
        
        int positive = 0;
        int negative = 0;
        
        for(int n : nums){

            if(n == 0){
                positive = 0;
                negative = 0;
            }
            
            if(n < 0){
                swap(positive, negative);
            }
            
            if( n > 0 || positive > 0) positive++;
            
            if( n < 0 || negative > 0) negative++;
            
        
            ans = max(ans, positive);
        }
        
        return ans;
        
    }
};