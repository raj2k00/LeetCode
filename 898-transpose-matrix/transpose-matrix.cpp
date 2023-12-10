class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> ans(column, vector<int>(row, 0));

        for(int i = 0; i < column; i++){
            for(int j = 0; j < row; j++){
                ans[i][j] = matrix[j][i];
            }
        }

        return ans;
    }
};