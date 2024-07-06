class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                int tot = nums[i]+nums[j]+nums[k];
                if(tot>0)
                k--;
                else if(tot<0)
                j++;
                else
                {
                    v.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while (j<n && nums[j] == nums[j-1] && j < k) 
                        j++;
                }
            }
        }
        return v;
    }
};