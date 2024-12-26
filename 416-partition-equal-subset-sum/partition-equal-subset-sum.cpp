class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s = 0 ;
        for(auto x : nums)s += x;
        if(s%2!=0)return 0;
        s = s/2;
        int n = nums.size();
        vector<int> dp(s+1,false);
        dp[0] = 1;
        for(int i = 0 ; i<nums.size();i++)
        {
            for(int j = s; j>=nums[i]; j--)
            {
                dp[j] = dp[j] || dp[j-nums[i]];
            }
            cout<<endl;
        }

        return dp[s];
    }
};