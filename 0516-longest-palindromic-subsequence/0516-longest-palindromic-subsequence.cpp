class Solution {
public:
    int longestPalindromeSubseq(string t1) {
        string t2 = t1;
        reverse(t2.begin(),t2.end());
        int n = t1.size(), m = t2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i = 1; i<=n;i++)
        {
            for(int j = 1 ; j<=m;j++)
            {
                if(t1[i-1]==t2[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
                else
                dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n][m];
    }
};