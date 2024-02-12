class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = -1 , mx = -1 ;
        unordered_map<int,int> m ;
        for(int i = 0 ; i<nums.size();i++)
        m[nums[i]]++;
        for(auto &x : m) {
            if(x.second > mx) {
                mx = x.second;
                ans = x.first;
            }
        }
        return ans ;
    }
};