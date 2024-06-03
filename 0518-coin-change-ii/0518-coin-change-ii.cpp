class Solution {
public:
    int change(int sum, vector<int>& coins) {
        vector<int> dp(sum + 1,0);
        int n = coins.size();
        dp[0] = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=sum-coins[i];j++){
                dp[j + coins[i]] += dp[j];
            }
        }
        return dp[sum];
    }
};