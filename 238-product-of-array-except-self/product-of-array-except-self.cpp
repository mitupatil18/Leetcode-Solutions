class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size()) ;
        int i , tmp ;
        for(i = 0 , tmp = 1 ; i<nums.size() ; i++)
        {
            ans[i] = tmp ;
            tmp *= nums[i] ;
        }
        for(i = nums.size()-1 , tmp = 1 ; i>=0 ; i--)
        {
            ans[i] *= tmp ;
            tmp *= nums[i] ;
        }
        return ans ;
    }
};