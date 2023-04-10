class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // sort(arr1.begin(), arr1.end());
        
        int hash[1001] = {0};
        
        vector <int> ans;
        
        for(auto x: arr1){
            hash[x]++;
        }
        
        for(int i = 0; i < arr2.size(); i++){
            while(hash[arr2[i]] != 0){
                ans.push_back(arr2[i]);
                hash[arr2[i]]--;
            }
        }
        
        for(int i = 0; i < 1001; i++){
            while(hash[i] != 0){
                ans.push_back(i);
                hash[i]--;
            }
        }
        
        return ans;
        
    }
};