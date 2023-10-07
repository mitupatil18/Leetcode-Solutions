class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> s ;
        int i = nums.size()-1 , cnt = 0  ;
        while(i>=0)
        {
            if(nums[i]<=k && s.find(nums[i])==s.end())
            {
                s.insert(nums[i]);
            }
                cnt++ ;
            if(s.size()==k)
            return cnt ;
            i-- ;
        }
        return 1 ;
    }
};