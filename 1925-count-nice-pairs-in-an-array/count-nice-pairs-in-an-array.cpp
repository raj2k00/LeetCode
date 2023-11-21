class Solution {
public:

    int rev(int n){
        int reverse = 0;
        while(n > 0){
            reverse = (reverse * 10) + (n % 10);
            n = n / 10;
        }
        return reverse;
    }

    int countNicePairs(vector<int>& nums) {

        int ans = 0;
        int mod = 1e9+7;

        vector <int> modifiedArray;

        for(int i = 0; i < nums.size(); i++){
            modifiedArray.push_back(nums[i] - rev(nums[i]));
        }

        unordered_map <int, int> hash;

        for(int num : modifiedArray){
            ans = ( ans + hash[num]) % mod;
            hash[num]++;
        }

        return ans;        
    }
};