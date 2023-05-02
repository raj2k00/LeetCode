class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0, diff;
        if(n < 3) return 0;
        
//         vector <vector <int>> subArray;
        
//         for(int i = 0; i < n ; i++ ){
//             for(int j = i; j < n; j++ ){
//                 if(j - i < 2) continue;
//                 vector <int>temp;
//                 for(int k = i; k <= j; k++){
//                     temp.push_back(nums[k]);
//                 }
//                 subArray.push_back(temp);
//             }
//         }
        
//         for(auto x: subArray){
//             unordered_set <int> s;
//             for(int i = x.size() -1; i > 0; --i){
//                  s.insert(x[i] - x[i - 1]);
//             }
//             if(s.size() == 1){
//                 count++;
//             }
            
//         }
        
//         return count;
        
        for(int i = 0; i < n - 2; i++){
            
            diff = nums[i + 1] - nums[i];
            
            for(int j = i + 2; j < n; j++){
                
                if(nums[j] - nums[j - 1] == diff){
                    count++;
                }else{
                    break;
                }
                
            }
            
        }
        
        return count;
        
        
    }
};