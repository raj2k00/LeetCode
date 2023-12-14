class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        vector <int> onesRow (row, 0);
        vector <int> onesCol (col, 0);

        vector <vector <int>> ans(row, vector<int>(col,0));

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                onesRow[i] += grid[i][j];
                onesCol[j] += grid[i][j];
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = 2 * onesRow[i] +  2 * onesCol[j] - row - col;
            }
        }

        return ans;
    }
};