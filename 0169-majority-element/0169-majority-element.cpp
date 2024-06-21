class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int t = nums[0], cnt= 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==t)
            cnt++;
            else
            cnt--;
            if(cnt<0)
            {
                t = nums[i];
                cnt = 0 ;
            }
        }
        return t;
    }
};