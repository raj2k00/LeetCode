class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        
        vector <vector<int>> ans(n, vector<int>(n,0));
        
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        
        int value = 1;
        
        int i;
        
        while(top <= bottom && left <= right){
            
            // first row;
            for( i = left; i <= right; i++ ){
                ans[top][i] = value++;
            }
            top++;
            
            // last column;
            for( i = top; i <= bottom; i++){
                ans[i][right] = value++;
            }
            right--;
            
            if(top <= bottom){
                for(i = right; i >= left; i--){
                    ans[bottom][i] = value++;
                }
                bottom--;
            }
            
            if(left <= right){
                for(i = bottom; i >= top; i--){
                    ans[i][left] = value++;
                }
                left++;
            }
        }
        
        
        return ans;
        
    }
};