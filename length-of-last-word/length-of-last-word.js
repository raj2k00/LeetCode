/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {

    const s1 = s.split(" ");

    const s2 = s1.length - 1;
    
    for(let i = s2; i >= 0; i--){
        if(s1[i] && s1[i].length > 0){
            return s1[i].length
        }
    }
};