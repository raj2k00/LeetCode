/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let input_number = x;
    let reversed_number = 0;
    let remainder = 0;
    
    if(x < 0) return false;
    
    for(; input_number != 0 ; ){
        remainder = parseInt(input_number % 10);
        reversed_number = reversed_number * 10 + remainder
        input_number= parseInt(input_number / 10) 
    }
    if(x == reversed_number) return true;
    return false;
};