class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0 , j = nums.size()-1, m ;
        while(i<j)
        {
            m = (j+i)/2 ;
            if(m%2==0)
            m-- ;
            if(nums[m]==nums[m-1])
            i = m+1 ;
            else
            j = m-1 ;
        }
        return nums[i] ;
    }
};