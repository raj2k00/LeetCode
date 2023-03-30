class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size() - 1;
        
        while(high >= low){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target){
                return true;
            }
            
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                --high;
                ++low;
            }
            
            //if low to mid is sorted

            else if(nums[low] <= nums[mid]){              
                // check if the target is inbetween low to mid
                if(target >= nums[low] && nums[mid] > target){
                    high = mid - 1;
                }else{
                     low = mid + 1;  // else search in other half
                }    
            }else{
                // if low to mid is not sorted, then mid to high should be sorted            
                if(target > nums[mid] && nums[high] >= target){
                    low = mid + 1;
                }else{
                     high = mid - 1;
                }
            }
        }
        // not found
        return false;
    }
};