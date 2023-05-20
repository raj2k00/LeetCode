class Solution {
public:
    int numberOfSteps(int num) {
        return num ? __builtin_popcount(num) + log2(num) : 0;
    }
};