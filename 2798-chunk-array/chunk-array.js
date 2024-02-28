/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let chunkArray = [];
    while(arr.length){
        chunkArray.push(arr.splice(0, size));
    }
    return chunkArray
};
