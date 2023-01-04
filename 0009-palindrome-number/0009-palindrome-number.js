/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let stringifyNumber = String(x);
    const reversedNumber = stringifyNumber.split("").reverse().join("");
    if(x == reversedNumber) return true;
    return false;
};