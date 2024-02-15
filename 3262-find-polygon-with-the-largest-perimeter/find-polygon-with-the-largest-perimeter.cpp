class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long res = -1 , total = 0  ;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i<nums.size() ;i++)
        {
            if(total>nums[i])
            res = total+nums[i];
            total += nums[i];
        }
        return res;
    }
};