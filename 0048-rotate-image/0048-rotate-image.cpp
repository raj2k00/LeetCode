class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // if we need to rotate anti-clockwise just do transpose before interchange
        
        int n = matrix.size();
        
        // Interchanging columns
        for(int i = 0; i < n; i++){
            for(int j = 0, k = n - 1; j < k;  j++,k-- ){
                swap(matrix[j][i], matrix[k][i]);
            }
        }
        
        // transposing the matrix
        for(int i = 0; i < n ; i++){
            for(int j = i ; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
    }
};