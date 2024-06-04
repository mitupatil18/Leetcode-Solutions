class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i = 0 , j = 0 ; i<m ;i++)
        {
            if(g[i][j]==1)
            break;
            dp[i][j] = 1;
        }
        for(int i = 0 , j = 0 ; j<n ;j++)
        {
            if(g[i][j]==1)
            break;
            dp[i][j] = 1;
        }
        for(int i = 1 ; i<m ;i++)
        {
            for(int j = 1 ; j<n ; j++)
            {
                if(g[i][j]==1) continue;
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};