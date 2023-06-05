class Solution {

private:
    vector <int> memo;
    int robHouse(vector<int>&nums, int i){
        if(i < 0){
            return 0;
        }

        if(memo[i] != -1){
            return memo[i];
        }
        
        memo[i] =  max(robHouse(nums, i - 2) + nums[i], robHouse(nums, i - 1));
    
        return memo[i];
    }

public:
    int rob(vector<int>& nums) {
        memo.resize(nums.size() + 1, -1);
        return robHouse(nums, nums.size() - 1);
    }
};