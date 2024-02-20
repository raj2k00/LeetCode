/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {

    const n = nums.length
    const ExpectedTotal =  n *( n + 1) /2 ;
    let currTotal = 0;

    for(let i = 0; i < nums.length; i++){
        currTotal += nums[i];
    }
    
    return ExpectedTotal - currTotal;

};