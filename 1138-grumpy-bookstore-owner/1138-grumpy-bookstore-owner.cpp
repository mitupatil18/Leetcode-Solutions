class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {

        int i, k = 0, ans = 0, n = c.size();

        vector<int> p(n, 0); // Prefix sums of satisfied customers
        vector<vector<int>> dp(n, {2, 0}); // DP table

        k = c[0]; // Total customers without technique
        p[0] = g[0] * c[0]; // Satisfied customers if the owner is grumpy for the first customer
        dp[0][0] = p[0]; // Initialize dp[0][0]

        for (i = 1; i < n; i++) {
            k += c[i]; // Accumulate total customers

            if (g[i] == 1)
                p[i] = c[i] + p[i - 1];

            p[i] = max(p[i - 1], p[i]);
            dp[i][0] = p[i]; // dp[i][0] stores the max satisfied customers up to index i without using the technique

            if (i >= m) {
                dp[i][1] = dp[i - 1][1] + p[i] - p[i - 1]; // dp[i][1] considering the effect of using the technique
                dp[i][1] = min(dp[i][1], dp[i - m][0]); // Ensure dp[i][1] is the minimum possible value
            }
        }

        return k - dp[n - 1][1];
    }
};