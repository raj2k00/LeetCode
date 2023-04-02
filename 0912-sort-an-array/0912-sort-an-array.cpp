class Solution {
public:
    
    void merge(vector<int>& nums, int l, int m, int r){
        int s1 = m - l + 1;
        int s2 = r - m;
        
        vector <int> L(s1);
        vector <int> R(s2);
        
        for(int i = 0; i < s1; i++){
            L[i] = nums[l + i];
        }
        
        for(int j = 0; j < s2; j++){
            R[j] = nums[m + 1 + j];
        }
        
        int i = 0;
        int j = 0;
        int k = l;
        
        while(i < s1 && j < s2){
            if(L[i] < R[j]){
                nums[k] = L[i];
                i++;
            }else{
                nums[k] = R[j];
                j++;
            }
            k++;
        }
        
        
        while(i < s1){
            nums[k++] = L[i++];
        }
        
        while(j < s2){
            nums[k++] = R[j++];
        }
        
    }
    
    void mergeSort(vector<int>&nums, int l, int r){
        if(l < r){
            int m = l + (r - l) / 2;
            mergeSort(nums, l, m);
            mergeSort(nums,m+1, r);
            merge(nums, l, m, r);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int r = nums.size() - 1;
        mergeSort(nums, 0, r);
        return nums;
    }
};