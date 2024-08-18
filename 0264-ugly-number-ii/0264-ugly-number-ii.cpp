class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        int p1 = 0, p2= 0, p3 = 0;
        for(int i = 1; i<n ;i++)
        {
            int x = dp[p1]*2;
            int y = dp[p2]*3;
            int z = dp[p3]*5;
            dp[i] = min(x,min(y,z));
            if(dp[i]==x)
            p1++;
            if(dp[i]==y)
            p2++;
            if(dp[i]==z)
            p3++;
        }
        return dp[n-1];
    }
};