class Solution {
public:
    int longestPalindromeSubseq(string a) {
        string b = a ;
        reverse(b.begin(),b.end());
        int n = a.size() ;
        int dp[n+1][n+1] , i , j ;
        memset(dp,0,sizeof(dp));
        for(i = 0 ; i<=n ; i++)
        {
            for(j = 0 ; j<=n ; j++)
            {
                if(i==0 || j==0)
                dp[i][j] = 0;
                else if(a[i-1]!=b[j-1])
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                else
                dp[i][j] = dp[i-1][j-1]+1 ;
            }
        }
        return dp[n][n];
    }
};