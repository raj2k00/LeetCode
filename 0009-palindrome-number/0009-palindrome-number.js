/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let input_number = x;
    let reversed_number = 0;
    let remainder = 0;
    
    if(x < 0) return false;

    for(let i = input_number  ; i > 0 ; i= parseInt(i / 10)){
        remainder = parseInt(i % 10);
        reversed_number = reversed_number * 10 + remainder
    }
    if(x == reversed_number) return true;
    return false;
};