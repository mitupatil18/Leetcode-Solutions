class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i , j , n = nums.size();
        vector<int> v ;
        for(i = 0 ; i<n-1; i++)
        {
            for(j = i+1 ; j<n ; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v ;
                }
            }
        }
        return v ;
    }
};