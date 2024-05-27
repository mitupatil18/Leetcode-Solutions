class Solution {
public:
    int specialArray(vector<int>& nums) {
        int cnt = 0 , n =nums.size();
        sort(nums.begin(),nums.end());
        int j = 0 ;
        for(int i = 0 ; i<n;i++)
        {
            int rem = n-i ;
            while(j<=nums[i])
            {
                if(j==rem)
                return j ;
                j++;
            }
        }
        return -1 ;
    }
};