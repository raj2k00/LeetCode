class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> hash;

        for(auto i : nums){
            if(hash[i]){
                return true;
            }else{
                hash[i]++;
            }
        }

        return false;
    }
};