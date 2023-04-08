class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector <int> ans;
        
        int i = 0;
        int j = 0;
        
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            }else if ( nums2[j] < nums1[i]){
                j++;
            }else{
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        
        return ans;
        
    }
};