class Solution {
public:
    int find(vector<int>& dp, vector<int>& nums, int n)
    {
        if(n==nums.size())
        return 0;
        if(dp[n]!=-1)
        return dp[n] ;
        if(n==nums.size()-1)
        return dp[n] = nums[n];
        return dp[n] = max(find(dp,nums, n+1),find(dp,nums, n+2)+nums[n]);
    }
    int rob(vector<int>& nums) {
        vector<int> a, b ;
        int n = nums.size();
        if(n==1) return nums[0];
        for(int i = 0 ; i<n-1;i++)
        a.push_back(nums[i]);
        for(int i = 1 ; i<n;i++)
        b.push_back(nums[i]);
        vector<int> dp1(n,-1), dp2(n,-1);
        return max(find(dp1,a, 0),find(dp2,b, 0));
    }
};