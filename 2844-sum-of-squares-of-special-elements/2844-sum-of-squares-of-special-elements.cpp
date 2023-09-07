class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size() , i = 0 , ans = 0 ;
        for(i = 0 ; i<n ; i++)
        {
            if(n%(i+1)==0)
            {
                ans += (nums[i]*nums[i]);
            }
        }
        return ans ;
    }
};