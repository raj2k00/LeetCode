/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {

    let arr = s.split(" ");

    let ans = "";

    function reverseString (input){
      return input.split("").reverse().join('')
    }

    for(const i of arr){
        ans += ` ${reverseString(i)}`;
    }

    return ans.trim();
    
};