class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector <int> hash (1001 ,0);
        
        for(auto x: arr1){
            hash[x]++;
        }
        
        // storing the answer in arr1, to reduce memory usage;
        
        arr1.clear();
        
        // pushing the elements in the order of arr2;
        
        for(int i = 0; i < arr2.size(); i++){
            while(hash[arr2[i]] != 0){
                arr1.push_back(arr2[i]);
                hash[arr2[i]]--;
            }
        }
        
        // pushing remaining elements in arr2;
        
        for(int i = 0; i < 1001; i++){
            while(hash[i] != 0){
                arr1.push_back(i);
                hash[i]--;
            }
        }
        
        return arr1;
        
    }
};