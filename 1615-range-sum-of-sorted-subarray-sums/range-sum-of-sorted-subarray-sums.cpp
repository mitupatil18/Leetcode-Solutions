class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod = 1e9+7;
        vector<int> v;
        int ans = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            int sum = nums[i];
            v.push_back(sum);
            for(int j = i+1; j<nums.size();j++)
            {
                sum += nums[j];
                sum %= mod;
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
        for(int i = left-1 ; i<right ;i++)
        {
            ans += v[i];
            ans %= mod;
        }
        return ans;
    }
};