class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0 , ans = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ans = max(ans,sum);
                sum = 0 ;
            }
            else
            sum ++;
        }
        return max(ans,sum);
    }
};