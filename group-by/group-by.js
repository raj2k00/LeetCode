/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
    const ans = {};

    for(let i = 0; i < this.length; i++){
        if(fn(this[i]) in ans){
            ans[fn(this[i])].push(this[i]);
        }else{
            ans[fn(this[i])] = [this[i]];
        }
    }

    return ans;
};

/*
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */