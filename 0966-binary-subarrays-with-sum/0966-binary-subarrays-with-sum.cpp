class Solution {
public:
    int find(vector<int>& nums, int goal)
    {
        if(goal<0) return 0;
        int i = 0 , j = 0 , sum = 0 , ans = 0, n = nums.size();
        while(i<n)
        {
            sum += nums[i];
            while(sum>goal && j<n)
            sum -= nums[j++];
            if(sum<=goal)
            ans+= (i-j+1) ;
            i++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return find(nums,goal)-find(nums,goal-1);
    }
};