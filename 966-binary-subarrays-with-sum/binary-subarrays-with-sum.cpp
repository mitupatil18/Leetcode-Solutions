class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0 , ans = 0  ;
        map<int,int> m;
        for(int i = 0 ; i<nums.size() ;i++)
        {
            sum += nums[i];
            if(sum==goal)
            ans++;
            int dif = sum-goal;
            if(m.find(dif)!=m.end())
            ans += m[dif];
            m[sum]++;
        }
        return ans;
    }
};