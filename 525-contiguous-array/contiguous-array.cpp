class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int a = 0 , b = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==0)
            nums[i] = -1;
        }
        map<int,int> m;
        int sum = 0 ,ans = 0 ;
        m[sum] = -1;
        for(int i = 0 ; i<nums.size();i++)
        {
            sum += nums[i];
            if(m.find(sum)!=m.end())
            ans = max(ans,i-m[sum]);
            else
            m[sum] = i;
        }
        return ans;
    }
};