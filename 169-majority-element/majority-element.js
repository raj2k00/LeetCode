/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {

    let count = 0;
    let ans = 0;

    for(const num of nums){
        if(count == 0){
            ans = num;
            count++;
        }

        else if(ans == num){
            count++;
        }

        else{
            count--;
        }
    }

    return ans;
};