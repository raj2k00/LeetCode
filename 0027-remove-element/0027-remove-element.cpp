class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto filterd_array = remove(nums.begin(), nums.end(),val);
        return distance(nums.begin(), filterd_array);
    }
};