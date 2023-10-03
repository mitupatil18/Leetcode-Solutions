class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m ;
        int ans = 0 ;
        int i = 0 ;
        while(i<nums.size())
        {
            m[nums[i]]++ ;
            i++ ;
        }
        for(auto it = m.begin() ; it!=m.end() ; it++)
        {
            int x = it->second;
            ans += (x*(x-1))/2 ;
        }
        return ans ;
    }
};