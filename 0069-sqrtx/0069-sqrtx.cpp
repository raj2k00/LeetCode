class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1){
            return x;
        }
        
        long long int start = 1;
        long long int end = x/2;
        long long int ans;
        
        while(start <= end){
            
            long long int mid = start + (end - start) / 2;
            
            long long int sqr = mid * mid;
            
            if(sqr == x){
                return mid;  // perfect square;
            }
            
            if(sqr <= x){
                start = mid + 1;
                ans = mid;
            }
            
            else {
                end = mid - 1;    
            }
        }
        return ans;
        
    }
};