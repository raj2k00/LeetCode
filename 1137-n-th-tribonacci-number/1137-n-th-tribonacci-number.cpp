class Solution {
public:
    int dp[38];
    
    int memoizeTribonacci(int n){
        if(n == 0) return 0;
        if(n <= 2) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = memoizeTribonacci(n - 1) + memoizeTribonacci(n - 2) + memoizeTribonacci(n - 3);
    }
    
    int tribonacci(int n) {
        
        int first = 0, second = 1, third = 1;
        
        if(n == 0) return first;
        if(n <= 2) return second;
        
        memset(dp, -1, sizeof(dp));
        
        return memoizeTribonacci(n);
         
    }
};