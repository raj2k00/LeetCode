class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int right = 0;
        int left = 0;
        int ans = 0;
        int maxZero = 0; 

        for(int right = 0; right < nums.size(); right++){

            if(nums[right] == 0){
                maxZero++;
            }

            while(maxZero > 1){

                if(nums[left] == 0){
                    maxZero--;
                }

                left++;
            }

            ans = max(ans , right - left );

        }

        return ans;
        
    }
};