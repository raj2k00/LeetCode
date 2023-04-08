class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set <int> s(nums1.cbegin(), nums1.cend());

        vector <int> ans;
            
        for(auto x : nums2){ 
            if(s.erase(x) > 0){
                ans.push_back(x);
            }
        }
        
        return ans;
        
    }
};