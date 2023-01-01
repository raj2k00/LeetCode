/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let numberSet = new Set();
    for(let i = 0; i < nums.length ; i++){
        let difference = target - nums[i];
        if(numberSet.has(difference)){
            return [nums.indexOf(difference), i ]
        }else{
            numberSet.add(nums[i]) 
        }
    }
};