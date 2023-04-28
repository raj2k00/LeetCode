class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int ans = 0;
        int positive = 0;
        int negative = 0;
        
        for(int n: nums){
            
            if( n == 0){
                positive = 0;
                negative = 0;
            }
            
            if( n > 0){
                positive++;
                negative = negative == 0 ? 0 : negative + 1;
            }
            
            if(n < 0){
                int temp = positive;
                positive = negative == 0 ? 0 : negative + 1;
                negative = temp + 1;
            }
            
            ans = max(ans, positive);
        }
        
        return ans;    
    }
};