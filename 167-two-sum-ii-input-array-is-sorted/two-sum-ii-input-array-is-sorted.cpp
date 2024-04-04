class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        int l = 0  , r = n-1;
        while(l<r)
            {
                int sum = nums[l]+nums[r];
                if(sum>t)
                r--;
                else if(sum<t)
                l++;
                else
                return {l+1,r+1};
            }
            
        
        return {};
    }
};