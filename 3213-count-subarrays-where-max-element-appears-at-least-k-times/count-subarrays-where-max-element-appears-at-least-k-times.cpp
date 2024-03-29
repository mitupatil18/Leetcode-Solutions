class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(), nums.end());
        long long ans = 0 , n = nums.size(), cnt = 0;
        map<int,int> m;
        for(int i = 0, j = 0  ; j<nums.size() ;j++)
        {
            cnt += (nums[j]==maxi);
            while(cnt>=k)
            cnt -= (nums[i++]==maxi);
            ans += i ;
        }
        return ans;
    }
};