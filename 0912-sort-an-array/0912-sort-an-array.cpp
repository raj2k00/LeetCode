int A[50001] = {0};
int B[50001] = {0};
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
    
        for(auto x : nums){
            if(x >= 0){
                A[x]++; 
            }else{
                B[-x]++;   // absolute value (-(-3)) => 3 
            }
        }
        
        nums.clear(); // clearing input array
        
        for(int i = 50000; i >= 1; i--){  // B has negative values (say), 
            if(B[i]){                     // -100 smaller than -5, so start from end vaue
                while(B[i] != 0){         // change the value back to negative   
                    nums.push_back(-i);          
                    B[i]--;
                }                               
            } 
        }
        
        for(int i = 0; i <= 50000 ; i++ ){
            if(A[i]){
                while(A[i] != 0){
                    nums.push_back(i);
                    A[i]--;
                }
            }
        }
        
        return nums;
         
        
    }
};