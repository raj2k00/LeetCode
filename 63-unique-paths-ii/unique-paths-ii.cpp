class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector <vector<long>> grid (m+1, vector<long>(n+1, 0));

        grid[0][1] = 1;
        grid[1][0] = 1;

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if (!obstacleGrid[i - 1][j - 1]) {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                }
            }
        }


        return grid[m][n]/2;
  
    }
};