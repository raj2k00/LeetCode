class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int,int> hash;
        int ans = 0;

        for(int i : nums){
            hash[i]++;
        }

        for(auto i : hash){
            if(i.second > 1){
                int n = i.second;
                ans += (n * (n -1)) / 2;
            }
        }

        return ans;
    }
};