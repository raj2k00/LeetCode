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

            else if( curr % 3 == 0){
                ans += curr / 3;
            }

            else if( curr % 3 == 1){
                ans += curr / 3 + 1;
            }

            else if( curr % 3 == 2){
                ans += curr / 3 + 1;
            }
        }

        return ans;
    }
};