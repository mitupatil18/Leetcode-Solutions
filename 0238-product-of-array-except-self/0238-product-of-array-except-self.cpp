class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, z = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]!=0)
            prod *= nums[i];
            else
            z++;
        }
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==0 && z==1)
            nums[i] = prod;
            else if(z>0)
            nums[i] = 0 ;
            else
            nums[i] = prod/nums[i];
            
        }
        return nums;
    }
};