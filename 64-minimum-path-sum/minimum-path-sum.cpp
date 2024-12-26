class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        dp[0][0] = g[0][0];
        for(int i = 1 ; i<m ;i++)
        dp[i][0] = dp[i-1][0]+g[i][0];
        for(int i = 1 ; i<n ;i++)
        dp[0][i] = dp[0][i-1]+g[0][i];
        for(int i = 1 ; i<m ;i++)
        {
            for(int j = 1 ; j<n; j++)
            {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1])+g[i][j];
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[m-1][n-1];
        return 0;
    }
};