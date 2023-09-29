class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i = 0 ;
        int f = 0 , g = 0 ;
        for( ; i<nums.size()-1 ; i++)
        {
            if(nums[i]==nums[i+1])
            {
                f++ ;
                g++ ;
            }
            else if(nums[i]<nums[i+1])
                f++ ;
            else
                g++ ;
        }
        if(f==nums.size()-1 || g==nums.size()-1)
            return true ;
        return false ;
    }
};