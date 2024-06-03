class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = 0, n = nums.size();
        for(int i = 0 ; i<nums.size() ;i++)
        s += nums[i];
        if(s%2!=0)
        return 0;
        s /= 2;
        vector<bool> dp(s+1,false);
        dp[0] = true;
        for(int i = 0 ; i<nums.size() ;i++)
        {
            for(int j = s ; j>=nums[i] ;j--)
            {
                dp[j] = dp[j] || dp[j-nums[i]];
            }
        }
        return dp[s];
    }
};