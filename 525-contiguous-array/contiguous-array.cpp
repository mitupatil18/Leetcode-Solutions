class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        unordered_map<int, int> prev;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += (nums[i] == 1) ? 1 : -1;
            
            if (sum == 0)
                res = i + 1;
            else if (prev.find(sum) == prev.end())
                prev[sum] = i;
            else
                res = max(res, i - prev[sum]);
        }
        return res;
    }
};