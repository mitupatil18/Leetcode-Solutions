class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int ans = 1, res = 0, i ;
        for(i = 0 ; i<nums.size()-1 ;i++)
        {
            if(nums[i]==nums[i+1])
            continue;
            if(nums[i]+1==nums[i+1])
            ans++;
            else
            {
                res = max(res,ans);
                ans = 1;
            }
        }
       res = max(res,ans);
        return res;
    }
};