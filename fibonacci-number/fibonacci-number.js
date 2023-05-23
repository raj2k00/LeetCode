/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n, memo = {}) {

    if(n in memo) return memo[n];

    if(n == 0) return 0;
    if(n <= 2) return 1;
    
    memo[n] =  fib(n - 1) + fib(n - 2);
    return memo[n];

};