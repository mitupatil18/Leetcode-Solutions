class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0 ,cnt2 = 0 , m1 = 0 , m2 = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==m1)
            cnt1++;
            else if(nums[i]==m2)
            cnt2++;
            else if(cnt1==0)
            {
                m1 = nums[i];
                cnt1++;
            }
            else if(cnt2==0)
            {
                m2 = nums[i];
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0 , cnt2 = 0 ;
        for(int i  = 0 ;i<nums.size();i++)
        {
            if(nums[i]==m1)
            cnt1++;
            else if(nums[i]==m2)
            cnt2++;
        }
        int n = nums.size();
        vector<int> v;
        if(cnt1>n/3)
        v.push_back(m1);
        if(cnt2>n/3)
        v.push_back(m2);
        return v;
    }
};