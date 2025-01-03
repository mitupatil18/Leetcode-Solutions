class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum1 = 0, sum2 = 0;
        int ans = 0;
        for (auto x : nums) {
            sum2 += x;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            sum1 = sum1 + nums[i];
            sum2 = sum2 - nums[i];
            if (sum1 >= sum2) {
                ans++;
            }
        }
        return ans;
    }
};