/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */

function helper(key, value){
    if(value && typeof value === 'object' && !Array.isArray(value) ){
        return   Object.fromEntries(Object.entries(value).sort());
    }else{
        return value;
    }
}

var areDeeplyEqual = function(o1, o2) {

    const stringifiedObj1 = JSON.stringify(o1, helper)
    const stringifiedObj2 = JSON.stringify(o2, helper)

    return  stringifiedObj1 === stringifiedObj2;

};