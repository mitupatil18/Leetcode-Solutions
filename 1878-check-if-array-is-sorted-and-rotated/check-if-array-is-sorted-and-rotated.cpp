class Solution {
public:
    bool check(vector<int>& nums) {
        int ans = 0 , i;
        nums.push_back(nums[0]);
        for(i = 0 ; i<nums.size()-1 ;i++)
        {
            if(nums[i]>nums[i+1])
            ans++;
        }
        if(ans<=1)
        return 1;
        return 0;
    }
};