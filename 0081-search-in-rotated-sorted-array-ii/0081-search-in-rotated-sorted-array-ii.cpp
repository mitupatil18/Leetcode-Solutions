class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0 , r = nums.size()-1;
        int mid ;
        while(l<=r)
        {
            mid = (l+r)/2 ;
            if(nums[mid]==target || nums[l]==target ||nums[r]==target)
                return true ;
            if(nums[mid]<target)
                r--;
            else
            {
                r--;
                l++;
            }
        }
        return false;
    }
};