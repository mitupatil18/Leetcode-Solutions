class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        map<int,int> m;
        int cnt = 1  , ans = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        m[nums[i]]++;
        int prev = INT_MIN;
        for(auto x : m)
        {
            if(prev==INT_MIN)
            {
                prev = x.first;
            }
            else
            {
                if(prev+1==x.first)
                cnt++;
                else
                cnt = 1 ;
                ans = max(ans,cnt);
                prev = x.first;
            }
        }
        return max(ans,cnt);
    }
};