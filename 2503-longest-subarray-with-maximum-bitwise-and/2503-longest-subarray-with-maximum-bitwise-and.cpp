class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, s = 0 ;
        int maxe = *max_element(nums.begin(),nums.end());
        for(auto x : nums)
        {
           if(x==maxe)
           s++;
           else
           s = 0 ;
           ans = max(ans,s);
        }
        return ans;
    }
};