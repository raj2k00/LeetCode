class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
       unordered_set <int> s1;
       unordered_set <int> s2;
       vector <int> ans;

       for(int num : nums1){
           s1.insert(num);
       }

       for(int num : nums2){
           s2.insert(num);
       }

       for(auto n : s1){
           if(s2.find(n) != s2.end()){
               ans.push_back(n);
           }
       }

       return ans;
    }
}; 