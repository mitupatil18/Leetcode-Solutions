class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1, n  = nums.size(), ans = nums[0];
        for(int i = 0 ; i<n ;i++)
        {
            prod *= nums[i];
            ans = max(ans,prod);
            if(prod==0)
            prod = 1;
        }
        prod = 1;
        for(int i = n-1 ; i>=0 ;i--)
        {
            prod *= nums[i];
            ans = max(ans,prod);
            if(prod==0)
            prod = 1;
        }
        return ans;
    }
};