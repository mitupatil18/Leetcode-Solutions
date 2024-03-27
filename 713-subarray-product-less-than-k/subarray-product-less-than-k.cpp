class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0, i , j = 0, p = 1 ;
        for(i = 0 ; i<nums.size() ;i++)
        {
            p *= nums[i];
            while(p >= k && j <= i) {
                p /= nums[j];
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }
};