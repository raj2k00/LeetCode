class TimeLimitedCache {
    keys = {}
    /** 
        * @param {number} key
        * @param {number} value
        * @param {number} time until expiration in ms
        * @return {boolean} if un-expired key already existed
    */
    set(key, value, duration) {
        const oldValue = this.keys[key];

        if (oldValue) {
            clearTimeout(oldValue.timeout)
        }

        this.keys[key] = {
            value, 
            timeout: setTimeout(() => {
                delete this.keys[key]
            }, duration),
        }

        return !!oldValue;
    }

    /** 
        * @param {number} key
        * @return {number} value associated with key
    */
    get(key) {
        if (this.keys.hasOwnProperty(key)) {
            return this.keys[key].value
        } else {
            return -1
        }
    }

    /** 
        * @return {number} count of non-expired keys
    */
    count() {
        return Object.values(this.keys).length
    }
};

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */