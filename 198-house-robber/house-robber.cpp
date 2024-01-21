class Solution {
public:
    int find(int ind, int &sum, vector<int>& dp, vector<int>& v) {
        if (ind >= v.size())
            return 0;
            if(dp[ind]!=-1)
            return dp[ind];
        if (ind == v.size() - 1) {
            dp[ind] = v[ind];
            return dp[ind];
        }
        dp[ind] = max(find(ind + 1, sum, dp, v), find(ind + 2, sum, dp, v) + v[ind]);
        return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        int ind = 0, sum = 0;
        return find(ind, sum, dp, nums);
    }
};
