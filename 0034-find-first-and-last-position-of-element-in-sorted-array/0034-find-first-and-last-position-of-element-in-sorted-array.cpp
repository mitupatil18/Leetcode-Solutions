class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]==target)
        return {0,0};
        else if(nums.size()==1 && nums[0]!=target)
        return {-1,-1};
        int l = 0 , r = nums.size()-1 , m;
        vector<int> v(2,0) ;
        while(l<=r)
        {
            m = (l+r)/2 ;
            if(nums[m]==target)
            break;
            if(nums[m]<target)
            l = m+1 ;
            else
            r = m-1;
        }
        if(l<=r)
        {
            int val1 = lower_bound(nums.begin() , nums.end() , target)-nums.begin();
            int val2 = upper_bound(nums.begin() , nums.end() , target)-nums.begin();
            v[0] = val1 ;
            v[1] = val2-1 ;
        }
        else
        v[0] = v[1]  = -1 ;
        return v ;
    }
};