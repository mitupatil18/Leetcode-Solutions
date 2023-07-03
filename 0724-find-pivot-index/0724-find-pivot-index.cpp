class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0 , r = 0 , n = nums.size();
        int sum = 0 ;
        for(int i = 0 ;i<n ;i++)
        {
            sum += nums[i];
        }
        int y = sum ,x = 0 ;
        for(int i = 0 ;i<n ;i++)
        {
            if(x==y-nums[i]) return i ;
            x += nums[i];
            y -= nums[i];
        }
        return -1 ;
    }
};