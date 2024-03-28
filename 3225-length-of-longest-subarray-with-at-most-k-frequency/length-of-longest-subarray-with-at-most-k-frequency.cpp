class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> m;
        int i = 0 , j = 0, n = nums.size() ;
        int ans = 0 ;
        while(i<n && j<n)
        {
            m[nums[j]]++;
            while(m[nums[j]]>k)
            {
                m[nums[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};