class Solution {
public:
    int find(int i , int n, vector<int>& nums,vector<int>& dp)
    {
        if(i>=n)
        return 0;
        if(dp[i]!=-1)return dp[i];
        if(i==n-1)
        return dp[i] = nums[i];
        int take = find(i+1,n,nums,dp);
        int nottake = find(i+2,n,nums,dp)+nums[i];
        dp[i] = max(take,nottake);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return find(0,n,nums,dp);
    }
};