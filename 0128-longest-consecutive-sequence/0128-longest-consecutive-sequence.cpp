class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int, int> m;
        for(auto x : nums) {
            m[x]++;
        }
        int cnt = 0, prev = INT_MIN, ans = 0;
        for(auto x : m) 
        {
            if (prev == INT_MIN || x.first == prev + 1) 
            cnt++;
            else 
            cnt = 1;
            prev = x.first;
            ans = max(ans, cnt);
        }
        
        return ans;
    }
};
