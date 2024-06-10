class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for (int j = 0; j < n; j++) {
            dp[0][j] = mat[0][j];
        }
        for(int i = 1; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                int l = (j>0)?dp[i-1][j-1]:INT_MAX;
                int r = (j<n-1)?dp[i-1][j+1]:INT_MAX;
                int d = dp[i-1][j];
                dp[i][j] = mat[i][j]+ min({l,r,d});
            }
        }
        int minSum = INT_MAX;
        for (int j = 0; j < n; j++) {
            minSum = min(minSum, dp[n-1][j]);
        }
        
        return minSum;
    }
};