/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {

    // use object to store the map values
    let hash = {};

    // variable for answer declartion
    let ans;

    // loop through the input array and store them in object with its count
    for (const num of nums) {
        hash[num] = ++hash[num] || 1;
    }

    // compare the count to find majority element
    for (const [num, count] of Object.entries(hash)) {
        if (count > nums.length / 2) {
            ans = num;
        }
    }

    // return ans 
    return ans;
};