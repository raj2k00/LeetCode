class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
                
        unordered_set <int> s1;
        unordered_set <int> s2;
        vector <int> res1;
        vector <int> res2;
        
        
        for(int n : nums1){
            s1.insert(n);
        }
        
        for(int n : nums2){
            s2.insert(n);
        }
        
        for(auto x : s1){
            if(s2.find(x) == s2.end()){
                res1.push_back(x);
            }  
        }
        
        for(auto x: s2){
            if(s1.find(x) == s1.end()){
                res2.push_back(x);
            }
        }
        
        return {res1, res2};
            
    }
};