class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  
        int temp[m+n];
                
        int i = 0;
        int j = 0;
        int k = 0;
        
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                temp[k] = nums1[i];
                i++;
            }else{
                temp[k]= nums2[j];
                j++;
            }
            k++;
        }
        
        while(i < m){
            temp[k++] = nums1[i++];
        }
        
        while(j < n){
            temp[k++] = nums2[j++];
        }
        
        nums1.clear();
        
        for(int a = 0; a < m+n; a++){
            nums1.push_back(temp[a]);
        }
        
    }
};