class Solution {
public:
    static const int MAX_TARGET = 1010; // Maximum possible target value
    int dp[MAX_TARGET];

    int combinationSum4(vector<int>& nums, int target) {
        for (int i = 0; i < MAX_TARGET; i++) {
            dp[i] = -1;
        }
        return combo(nums, target);
    }

    int combo(vector <int> &nums, int remain){
        if(remain == 0) return 1;

        if(~dp[remain]){
            return dp[remain];
        } 
        int result = 0;
        
        for(auto num : nums){
            if((remain - num) >= 0 )
                result += combo(nums, remain - num);
        }

        return dp[remain] = result;
    }
    
};