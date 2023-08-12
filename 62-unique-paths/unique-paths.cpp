class Solution {

public:
    int uniquePaths(int m, int n) {
        vector <vector <int>> grid (m+1, vector<int>(n+1,0));

        grid[1][1] = 1;

        for(int i = 0; i <= m; i++ ){
            for(int j = 0; j <= n; j++){
                int current =  grid[i][j];
                if(i+1 <= m) grid[i + 1][j] += current;
                if(j+1 <= n) grid[i][j + 1] += current;
            }
        }

        return grid[m][n];
    }
};