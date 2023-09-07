class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size()-1 ;
        int ans = 0 ;
        while(i<nums.size())
        {
            j = nums.size()-1 ; 
            while(i<j)
            {
                if(nums[i]+nums[j]<target)
                break;
                j-- ;
            }
            if(i<j)
            ans += (j-i);
            else break;
            i++ ;
        }
        return ans ;
    }
};