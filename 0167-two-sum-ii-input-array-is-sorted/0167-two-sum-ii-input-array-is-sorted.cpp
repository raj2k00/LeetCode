class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int start = 0;
        int end = numbers.size() - 1;
            
        while(start <= end){
            int ans = numbers[start] + numbers[end];
            if(ans == target){
                return {start+1, end+1};
            }else if (ans < target){
                start++;
            }else{
                end--;
            }
        }
        return {-1,-1};
    }
};