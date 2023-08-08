class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
             
        while(low < high){
            
            int mid = (low + high) / 2;     
        
            double num = (nums[mid] < nums[0]) == (target < nums[0])
                        ? nums[mid] 
                        : target < nums[0] ? -INFINITY : INFINITY;
            
            if(num < target){
                low = mid + 1;
            }else if( num > target){
                high = mid;
            }else{
                return mid; 
            }
            
        }
        return -1;   
    }
};