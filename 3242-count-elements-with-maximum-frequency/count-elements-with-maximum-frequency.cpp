class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
            return 1;
        vector<int> a ;
        int c = 1 ;
        for(int i = 0 ; i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                c++ ;
            else
            {
                a.push_back(c);
                c = 1 ;
            }
        }
        a.push_back(c);
        sort(a.begin(),a.end());
        int n = a.size();
        int mx = a[n-1], s = 0 ;
        for(int i = n-1 ; i>=0 ;i--)
        {
            if(a[i]==mx)
            s += a[i];
            else
                break;
        }
        return s ;
    }
};