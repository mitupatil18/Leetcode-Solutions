class Solution {
public:
    
    int find(int n, vector<int>& dp)
    {
        if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    
    if (dp[n] != -1) // If value is already computed, return it
        return dp[n];
    
    // Calculate and store the value in the memoization table
    dp[n] = find(n - 1, dp) + find(n - 2, dp) + find(n - 3, dp);
    
    return dp[n];
    }
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return find(n,dp);
    }
};