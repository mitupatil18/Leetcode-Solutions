class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0 , n = nums.size(), j = 1;
        while(i<n && j<n)
        {
            while(i<n && nums[i]%2==0)
            i+=2;
            while(j<n && nums[j]%2!=0 )
            j+=2;
            if (i < n && j < n) {
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};