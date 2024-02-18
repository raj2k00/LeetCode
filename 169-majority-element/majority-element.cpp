class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // for storing the num with its count
        unordered_map <int , int> mp;

        // storing the map values
        for(auto i : nums){
            mp[i]++;
        }

        // local greatest value for count
        int greatest = -1;
        int ans = -1;

        for(auto i : mp){
            if(i.second > nums.size() / 2 && i.second > greatest){
                greatest = i.second;
                ans = i.first; 
            }
        }

        return ans;
    }
};