class Solution {
public:
    int fib(int n) {
        int firstNumber = 0;
        int secondNumber = 1;
        
        if(n == 0) return 0;
        
        for(int i = 2; i <= n; i++){
            int temp = (firstNumber + secondNumber) % 1000000007;
            firstNumber = secondNumber;
            secondNumber = temp;
        }
        
        return secondNumber;
    }
};