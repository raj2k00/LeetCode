class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int s = mat.size();
        
        if(s == 1) return mat[0][0];
        
        cout << mat[s-2][s-2] << endl;
        
        int count = 0;
    
        for(int i = 0, j = 0; i < s && j < s; i++, j++){
            count += mat[i][j];
        }

        for(int i = 0, j = s - 1; i < s && j >= 0; j--, i++){
            count += mat[i][j];
        }
        
        if(s % 2 != 0){
           count -= mat[s/2][s/2];
        }
                
        return count;
        
    }
};