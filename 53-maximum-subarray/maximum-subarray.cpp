class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 , ans = nums[0];
        int n = nums.size();
        for(int i = 0 ; i<n ;i++)
        {
            sum += nums[i];
            ans = max(sum,ans);
            if(sum<0)sum = 0 ;
        }
        return ans;
    }
};