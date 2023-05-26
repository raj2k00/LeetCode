/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {

    if(n == 0) return arr;

    const ans = [];

    for(const element of arr){
        if(Array.isArray(element)){
            ans.push(...flat(element, n - 1))
        }else{
            ans.push(element)
        }
    }

    return ans;
};