class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        vector <int> onesRow (row, 0);
        vector <int> onesCol (col, 0);

        vector <int> zerosRow (row, 0);
        vector <int> zerosCol (col, 0);

        vector <vector <int>> ans(row, vector<int>(col,0));


        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j]){
                    onesRow[i] = onesRow[i] + 1;
                    onesCol[j] = onesCol[j] + 1;
                }else{
                    zerosRow[i] = zerosRow[i] + 1;
                    zerosCol[j] = zerosCol[j] + 1;
                }
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return ans;
        
    }
};