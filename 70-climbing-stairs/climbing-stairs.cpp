class Solution {
public:
    int find(vector<int>& dp,int n)
    {
        if(n<=2)
        return n ;
        if(dp[n]!=-1)
        return dp[n];
        dp[n] = find(dp,n-1)+find(dp,n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        if(n<=2)
        return n ;
        int t = n, cnt = 0 ;
        vector<int> dp(n+1,-1);
        return find(dp,n);
    }
};