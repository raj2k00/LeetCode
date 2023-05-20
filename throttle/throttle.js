/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var throttle = function(fn, t) {

    let argsToProcess = null;
    let intervalInProgress = null;

    function intervalFunction(){
        if(argsToProcess){
            fn(...argsToProcess)
            argsToProcess = null;
        }else{
            clearInterval(intervalInProgress)
            intervalInProgress = null
        }
    }

    return function(...args) {
        if(intervalInProgress){
            argsToProcess = args;
        }else{
            fn(...args);
            intervalInProgress = setInterval(intervalFunction, t)
        }
    }
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */