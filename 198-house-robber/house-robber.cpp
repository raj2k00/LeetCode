class Solution {

private:
    int robHouse (vector<int>& nums, int i, vector <int> & hash ){
        if(i < 0){
            return 0;
        }

        if(hash[i] != -1){
            return hash[i];
        }

        hash[i] =  max( robHouse(nums,i - 2, hash) + nums[i] ,  robHouse(nums, i - 1, hash));

        return hash[i];
    }


public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector <int> hash(n + 1, -1);
        return robHouse(nums , n - 1, hash);
    }
};