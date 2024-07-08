class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i = 0 ;i<nums.size();i++)
        nums[i] = nums[i]%2;
        map<int,int> m;
        int sum = 0 , ans = 0 ;
        m[0] = 1;
        for(int i = 0 ; i<nums.size();i++)
        {
            sum += nums[i];
            if(m.find(sum-k)!=m.end())
            ans += m[sum-k];
            m[sum]++;
        }
        return ans;
    }
};