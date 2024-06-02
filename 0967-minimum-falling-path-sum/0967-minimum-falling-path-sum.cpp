class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int j = 0; j < n; j++) {
            dp[0][j] = grid[0][j];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int left = (j > 0) ? dp[i-1][j-1] : INT_MAX;
                int right = (j < n-1) ? dp[i-1][j+1] : INT_MAX;
                int down = dp[i-1][j];
                
                dp[i][j] = grid[i][j] + min({left, down, right});
            }
        }
       int minSum = INT_MAX;
        for (int j = 0; j < n; j++) {
            minSum = min(minSum, dp[m-1][j]);
        }
        
        return minSum;
    }
};
