class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n, 0);

        int prefixSum = 0;

        for(int i = 0; i < n; i++){
            prefixSum += nums[i];
            ans[i] = prefixSum;
        } 

        return ans; 
    }
};