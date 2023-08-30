class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for (int i = n-2; i >= 0; i--) {
            if (nums[i] > nums[i+1]) {
                int mod = nums[i] % nums[i+1];
                if (mod == 0) {
                    int times = nums[i] / nums[i+1];
                    ans = ans + times - 1;
                    nums[i] = nums[i+1];
                } else {
                    int times = (nums[i] + nums[i+1] - 1) / nums[i+1];
                    ans = ans + times - 1;
                    nums[i] = nums[i] / times;
                }
            }
        }

        return ans;
    }
};