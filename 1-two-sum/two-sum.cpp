class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ;
        set<int> s;
        int i = 0 , dif;
        for(i = 0 ; i<nums.size() ;i++)
        {
            dif = target-nums[i];
            if(s.find(nums[i])!=s.end())
            break;
            s.insert(dif);
        }
        ans.push_back(i--);
        for( ; i>=0 ; i--)
        {
            if(nums[i]==dif)
            break;
        }
        ans.push_back(i);
        return ans;
    }
};