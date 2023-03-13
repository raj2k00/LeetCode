class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++ ){
            // we are just moving the non zero items to the front
            // increasing the count to count how many items we moved
            if(nums[i] != 0){    
                nums[count++] = nums[i];
            }
        }
        // adding zeros if the count is less than size of input
        while(count < nums.size()){
            nums[count++] = 0;
        }
        
    }
};