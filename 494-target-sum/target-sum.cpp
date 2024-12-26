class Solution {
public:
    void find(int i ,int sum, int& cnt, vector<int>& nums, int t)
    {
        if(sum==t && i==nums.size())
        cnt++;
        if(i>=nums.size())
        return;
        find(i+1,sum+nums[i],cnt,nums,t);
        find(i+1,sum-nums[i],cnt,nums,t);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        int cnt = 0 ;
        find(0, 0,cnt, nums,target);
        return cnt;
    }
};