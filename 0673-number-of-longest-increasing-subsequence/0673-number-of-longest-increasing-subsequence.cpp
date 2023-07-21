class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1) , ct(n,1) ;
        int len = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = i-1 ;  j>=0 ; j--)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[i]<dp[j]+1)
                    ct[i] = ct[j] ;
                    else if(dp[i]==1+dp[j])
                    ct[i] += ct[j] ;
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            len = max(len,dp[i]);
        }
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(dp[i]==len)
            ans += ct[i];
        }
        return ans ;
    }
};