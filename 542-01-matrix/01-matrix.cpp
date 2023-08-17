class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> dp;
        
        for (vector<int>& row: mat) {
            dp.emplace_back(row.begin(), row.end());
        }
        
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (dp[row][col] == 0) {
                    continue;
                }

                int minNeighbor = m * n;
                if (row > 0) {
                    minNeighbor = min(minNeighbor, dp[row - 1][col]);
                }
                
                if (col > 0) {
                    minNeighbor = min(minNeighbor, dp[row][col - 1]);
                }
                
                dp[row][col] = minNeighbor + 1;
            }
        }
        
        for (int row = m - 1; row >= 0; row--) {
            for (int col = n - 1; col >= 0; col--) {
                if (dp[row][col] == 0) {
                    continue;
                }
                
                int minNeighbor = m * n;
                if (row < m - 1) {
                    minNeighbor = min(minNeighbor, dp[row + 1][col]);
                }
                
                if (col < n - 1) {
                    minNeighbor = min(minNeighbor, dp[row][col + 1]);
                }
                
                dp[row][col] = min(dp[row][col], minNeighbor + 1);
            }
        }
        
        return dp;
    }
};