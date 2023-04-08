class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set <int> s;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector <int> ans;
        
        int i = 0;
        int j = 0;
        
        
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            }else if (nums2[j] < nums1[i]){
                j++;
            }else{
        
                s.insert(nums2[j]);
                i++;
                j++;
            }
        }
        
        for(auto x : s){           
            ans.push_back(x);
        }
        
        return ans;
        
    }
};