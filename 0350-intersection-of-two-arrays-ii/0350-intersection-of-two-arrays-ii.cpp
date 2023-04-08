class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        // Two Pointer Approach
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
        
//         vector <int> ans;
        
//         int i = 0;
//         int j = 0;
        
//         while(i < nums1.size() && j < nums2.size()){
//             if(nums1[i] < nums2[j]){
//                 i++;
//             }else if ( nums2[j] < nums1[i]){
//                 j++;
//             }else{
//                 ans.push_back(nums2[j]);
//                 i++;
//                 j++;
//             }
//         }
        
//         return ans; 
        
        // Using Hash Map
        
            unordered_map <int, int> m;
        
            for(auto x: nums1){
                m[x]++;
            }
        
            vector <int> ans;
        
            for(auto x : nums2){
                if(m[x]){
                    ans.push_back(x);
                    m[x]--;
                }
            }
        
            return ans;
        
        
    }
};