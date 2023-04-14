class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        // pointers to all the sides
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        
        // iterator
        int i = 0;
        
        vector <int> ans;
        
        
        while(top <= bottom && left <= right){
            
            // every for loop iteration reduces the size of the matrix;
            
            // from left to right (first row)  
            for(i = left; i <= right; i++ ){
                ans.push_back(matrix[top][i]);
            } 
            
            top++;  // row completed
            
            // top to bottom (last column)
            for( i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            
            right--; // column completed;
            
            // right to left (last row)
            if(top <= bottom){
                for( i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // row completed;
            }
            
            // bottom to top (first column)
            if(left <= right){
                for( i = bottom; i >=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++; // column completed
            }
            
        }
        
        return ans;  
        
    }
};