class Solution {
public:
    bool solve(const string& s, const string& p, int i, int j, vector<vector<int>>& dp) {
        if (i < 0 && j < 0)
            return true;
        if (i >= 0 && j < 0)
            return false;
        if (i < 0 && j >= 0) {
            for (int k = 0; k <= j; k++) {
                if (p[k] != '*')
                    return false;
            }
            return true;
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        if (s[i] == p[j] || p[j] == '?')
            return dp[i][j] = solve(s, p, i - 1, j - 1, dp);
        else if (p[j] == '*')
            return dp[i][j] = (solve(s, p, i - 1, j, dp) || solve(s, p, i, j - 1, dp));
        else
            return false;
    }

    bool isMatch(const string& s, const string& p) {
        vector<vector<int>> dp(s.size(), vector<int>(p.size(), -1));
        return solve(s, p, s.size() - 1, p.size() - 1, dp);
    }
};
