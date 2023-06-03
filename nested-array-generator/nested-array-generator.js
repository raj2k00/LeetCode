/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
   
    const flatArray = [];

    function pushArray (array){
        for(const el of array){
            if(Array.isArray(el)){
                pushArray(el);
            }else{
                flatArray.push(el)
            }
        }
    }

    pushArray(arr);

    for(let i = 0 ; i < flatArray.length; i++){
        yield flatArray[i];
    }

};

/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */