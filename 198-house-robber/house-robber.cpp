class Solution {
public:
    int find(int i, vector<int>& dp, int n, vector<int>& nums)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        if(i==n-1)
        return dp[i] = nums[i];
        dp[i] = max(find(i+1,dp,n, nums), find(i+2,dp,n, nums)+nums[i]);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return find(0,dp,n, nums);
    }
};