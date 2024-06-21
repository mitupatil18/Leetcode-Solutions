class Solution {
public:
    int  maxProduct(vector<int>& nums) {
        long long prod = 1 , ans = nums[0];
        for(long long i = 0 ; i<nums.size();i++)
        {
            prod *= nums[i];
            ans = max(ans,prod);
            if(prod==0 || prod<=INT_MIN)
            prod = 1;
        }
        prod = 1;
        for(long long i = nums.size()-1 ; i>=0;i--)
        {
            prod *= nums[i];
            ans = max(ans,prod);
            if(prod==0 || prod<=INT_MIN)
            prod = 1;
        }
        return ans;
    }
};