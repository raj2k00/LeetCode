/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {

    let res = [];

    const flattening = (array, d ) => {
        for(const element of array){
            if(Array.isArray(element) && d > 0 && d <= n){
                flattening(element, d - 1)
            }else{
                res.push(element);
            }
        }
    } 

    flattening(arr, n);

    return res;
};