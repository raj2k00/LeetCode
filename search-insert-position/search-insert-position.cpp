class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int pos;

        for(int i = 0; i < nums.size(); i++){
            if(target <= nums[i]){
                pos = i;
                break;
            }
        }

        return pos;
    }
};