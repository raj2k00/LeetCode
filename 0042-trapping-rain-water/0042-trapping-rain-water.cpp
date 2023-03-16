class Solution {
public:
    int trap(vector<int>& height) {
//         int total = 0;
        int n = height.size();
//         int left[n];
//         int right[n];
        
//         left[0] = height[0];
//         for(int i = 1; i < n; ++i){
//             left[i] = max(left[i - 1], height[i]);
//         }
        
//         right[n-1] = height[n-1];
//         for(int i = i -2 ; i >= 0; --i){
//             right[i] = max(right[i + 1], height[i]);
//         }
        
//         for(int i = 0; i < n; ++i){
//             total += min(left[i], right[i]) - height[i];
//         }
//         return total;
                int left[n];
        int right[n];
        
        long long total = 0;
        
        right[0] = height[0];
        
        for(int i = 1; i < n; ++i){
            right[i] = max(right[i-1], height[i]); 
        }
        
        
        left[n-1] = height[n-1];
        
        for(int i = n-2; i >= 0; --i){
            left[i] = max(left[i+1], height[i]);
        }
        
        
        for(int i = 0; i < n; ++i){
            total += min(right[i], left[i]) - height[i];
        }
        
        return total;
    }
};