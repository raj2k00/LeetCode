class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int column = matrix[0].size();
        
        int low = matrix[0][0];
        int high = matrix[row-1][column-1];
        
        if( target == low || target == high ) return true;
        
        if( target < low || target > high ) return false;
        
        int i = 0, j = 0;
        
        while( i < row  && j < column ){
            
            if(target == matrix[i][j]){
                return true;
            }
            else if (target > matrix[i][j] && target <= matrix[i][column - 1]){
                j++;
            }
            else{
                i++;
                j = 0;
            }
            
        }
        
        return false;
    }
};