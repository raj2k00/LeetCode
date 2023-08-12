class Solution {
public:

    vector<vector<int>> memo;
    vector<vector<int>> path;
    int row, col;

    int pathFinder(int m, int n){

        if(memo[m][n]!= -1){
            return memo[m][n];
        }

        if(m > row || n > col) return 0;
        
        if(path[m][n] == 1) return 0;

        if(m == row && n == col) return 1;

        memo[m][n] =  pathFinder(m+1, n) + pathFinder(m, n+1);

        return memo[m][n];

    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        this -> path = obstacleGrid;
        this -> row = m -1;
        this -> col = n -1;
        this -> memo = vector <vector<int>>(m+1, vector<int>(n+1, -1));
        return pathFinder(0, 0);

        
    }
};