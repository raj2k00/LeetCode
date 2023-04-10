class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector <int> hash (1001 ,0);
        
        for(auto x: arr1){
            hash[x]++;
        }
        
        arr1.clear();
        
        for(int i = 0; i < arr2.size(); i++){
            while(hash[arr2[i]] != 0){
                arr1.push_back(arr2[i]);
                hash[arr2[i]]--;
            }
        }
        
        for(int i = 0; i < 1001; i++){
            while(hash[i] != 0){
                arr1.push_back(i);
                hash[i]--;
            }
        }
        
        return arr1;
        
    }
};