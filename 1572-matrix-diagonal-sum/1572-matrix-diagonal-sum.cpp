class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int s = mat.size();        
        int count = 0;
    
        for(int i = 0; i < s; i++){
            count += mat[i][i];
            count += mat[s - 1 - i][i];
        }

        if(s % 2 != 0){
           count -= mat[s/2][s/2];
        }
                
        return count;
        
    }
};