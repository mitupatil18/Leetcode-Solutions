class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        if(nums.size()==0)
        return 0;
        for(int i = 0; i<nums.size();i++)
            m[nums[i]]++;
        int ans = 1 , prev = INT_MIN, fans = 0;
        for(auto x : m)
        {
            if(prev!=INT_MIN && prev+1==x.first)
            {
                prev = x.first;
                ans ++;
            }
            else
            {
                prev = x.first;
                ans = 1 ;
            }
                fans = max(fans,ans);
        }
        return max(fans,ans);
    }
};