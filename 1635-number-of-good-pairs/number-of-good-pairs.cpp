class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int,int> hash;
        int ans = 0;

        for(int i : nums){
            ans += hash[i];
            hash[i]++;
        }

        return ans;
    }
};