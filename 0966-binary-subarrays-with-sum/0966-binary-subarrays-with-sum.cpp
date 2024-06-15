class Solution {
public:
    int find(vector<int>& nums, int goal)
    {
        if(goal<0) return 0;
        int ans = 0 , i = 0, j = 0, sum = 0 ;
        for( ; i<nums.size();i++)
        {
            sum += nums[i];
            while(sum>goal && j<nums.size())
            sum -= nums[j++];
            if(sum<=goal)
            ans += (i-j+1);
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return find(nums,goal)-find(nums,goal-1);
    }
};