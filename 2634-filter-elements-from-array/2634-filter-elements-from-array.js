/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    
    const filterdArray = [];
    
    
    for(let i = 0; i < arr.length; i++){
         if(fn(arr[i],i)){
             filterdArray.push(arr[i]);
         }
    }
    
    return filterdArray;
    
};