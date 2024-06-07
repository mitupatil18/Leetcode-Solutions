class Solution {
public:
    int find(int i , vector<int>& nums, vector<int>& dp)
    {
        if(i==nums.size())
        return 0 ;
        if(dp[i]!=-1)
        return dp[i];
        if(i==nums.size()-1)
        return dp[i] = nums[i];
        dp[i] = max(find(i+1,nums,dp),find(i+2,nums,dp)+nums[i]);
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        vector<int> a, b;
        for(int i = 0 ; i<n-1; i++)
        a.push_back(nums[i]);
        for(int i = 1 ; i<n; i++)
        b.push_back(nums[i]);
        vector<int> dp1(n,-1), dp2(n,-1);
        return max(find(0,a,dp1),find(0,b,dp2));
    }
};