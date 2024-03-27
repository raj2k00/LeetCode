class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());


        int small = 1;
        int hasSeenSmall = false;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] > 0){
                if(nums[i] == small){
                    hasSeenSmall = true;
                    small++;
                }
            }

        }

        return small;
    
    }
};