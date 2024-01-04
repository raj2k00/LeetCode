class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map <int, int> mp;
        int ans = 0;

        for(int i : nums){
            mp[i]++;
        }

        for(auto i : mp){
            
            int curr = i.second;
            
            if(curr == 1) return -1;

            ans += ceil((double)curr / 3);
        }

        return ans;
    }
};