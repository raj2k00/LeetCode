class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector <vector <int>> ans;
        
        unordered_set <int> s1;
        unordered_set <int> s2;
        
        
        for(int n : nums1){
            s1.insert(n);
        }
        
        for(int n : nums2){
            s2.insert(n);
        }
        
        vector <int> res1;
        vector <int> res2;
        
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
        
        ans.push_back(res1);
        ans.push_back(res2);
        
        return ans;
            
    }
};