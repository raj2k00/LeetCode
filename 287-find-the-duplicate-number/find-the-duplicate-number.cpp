class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int before = nums[0];

        for(int i = 1; i < nums.size(); i++){

            if(nums[i] == before){
                return before;
            }

            before = nums[i];
        }  

        return 0;
    }
};