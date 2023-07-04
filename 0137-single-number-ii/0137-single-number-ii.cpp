class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0] ;
        sort(nums.begin(), nums.end());

        int ans, i ;
        for( i = 0 ; i<nums.size()-3; i +=3)
        {
            if(nums[i]!=nums[i+2])
                break ; 
        }
        if(i!=nums.size()-3)
            return nums[i];
        for(;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
                return nums[i+1];
        }
         return nums[i+1] ;
    }
};