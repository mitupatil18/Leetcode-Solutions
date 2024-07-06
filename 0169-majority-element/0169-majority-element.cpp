class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0], cnt = 0;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(maj==nums[i])
            cnt++;
            else cnt--;
            if(cnt<0)
            {
                maj = nums[i];
                cnt = 0 ;
            }
        }
        return maj;
    }
};