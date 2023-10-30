class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0 ;
        int i = 0 , cnt = 0;
        while(i<nums.size())
        {
            if(nums[i]==0)
            cnt++ ;
            else{
                long long a= (long long )cnt*(cnt+1)/2;
                ans+=a;
                cnt=0;
            }
            i++;
        }
        long long a= (long long)cnt*(cnt+1)/2;
        ans+=a;
        return ans ;
    }
};