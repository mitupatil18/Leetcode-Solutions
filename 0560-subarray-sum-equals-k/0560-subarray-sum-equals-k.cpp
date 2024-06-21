class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        m[0] = 1;
        int sum = 0 , n = nums.size(), ans = 0 ;
        for(int i = 0 ; i<n;i++)
        {
            sum += nums[i];
            if(m.find(sum-k)!=m.end())
            ans += m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};