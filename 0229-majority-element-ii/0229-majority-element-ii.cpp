class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size()/3 ;
       map<int,int> m ;
       set<int> s ;
       vector<int> ans ;
       for(int i = 0 ; i<nums.size() ; i++)
        {
            if(m[nums[i]]>=n)
            s.insert(nums[i]);
            m[nums[i]]++;
        }
        for(auto x : s)
        {
            ans.push_back(x);
        }
        return ans ;
    }
};