class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        
        unordered_set<int> freq(nums.begin(), nums.end());

        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            unordered_set<int> currFreq;
            
            for (int j = i; j < nums.size(); j++) {
                currFreq.insert(nums[j]);
                if (currFreq.size() == freq.size()) {
                    count++;
                }
            }
            
        }

        return count;
        
        
    }
};