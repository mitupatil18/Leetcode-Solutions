class Solution {
public:
    int find(vector<int>& nums, int k)
    {
        int i = 0 ,j = 0 , ans = 0 , n = nums.size();
        map<int,int> m;
        while(i<n)
        {
            m[nums[i]]++;
            while(m.size()>k && j<=i)
            {
                m[nums[j]]--;
                if(m[nums[j]]==0)
                m.erase(nums[j]);
                j++;
            }
            ans += (i-j+1);
            i++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return find(nums,k)-find(nums,k-1);
    }
};