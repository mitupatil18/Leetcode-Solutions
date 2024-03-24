class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto x : nums)
        {
            if(s.find(x)!=s.end())
            return x;
            s.insert(x);
        }
        return -1 ;
    }
};