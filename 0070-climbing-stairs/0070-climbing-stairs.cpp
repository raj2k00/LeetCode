class Solution {
public:
    int climbStairs(int n) {
    
        int first = 0;   
        int second = 1;
        
        for(int i = 1 ; i <= n; i++ ){
            int temp = first + second;
            first = second;
            second = temp;
        }
            
        return second;
    }
};