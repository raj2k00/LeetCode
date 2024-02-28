/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    const n  = this.length  // here `this` is will be array
    if(!n) return -1;
    return this[n-1]
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */