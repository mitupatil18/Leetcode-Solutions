class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prd = 1 ;
        int i = 0 , j = 0 , ans = 0 , n = nums.size();
        if(k==0 || k==1) return 0;
        for(i = 0 ; i<n ;i++)
        {
            prd *= nums[i];
            if(prd<k)
            {
                ans+= i-j+1 ;
            }
            else
            {
                while(prd>=k)
                {
                    prd = prd/nums[j];
                    j++;
                }
                ans += i-j+1;
            }
        }
        return ans;
    }
};