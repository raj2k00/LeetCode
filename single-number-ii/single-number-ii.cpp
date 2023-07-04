class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int res = 0;

        for (int i = 0; i < 32; i++) {
            
            int sum = 0;
            int mask = 1 << i;

            for (auto n : nums) {
                if (n & mask) sum++;
            }

            if (sum % 3 == 1) res |= mask;
        }

        return res;
    }
};