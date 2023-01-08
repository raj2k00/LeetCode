class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto filtered_array = remove(nums.begin(), nums.end(),val);
        return distance(nums.begin(), filtered_array);
    }
};