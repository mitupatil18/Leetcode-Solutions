class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int p1 = 0, p2 = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            int tmp = p1;
            p1 = max(p2+nums[i],p1);
            p2 = tmp;
        }
        return p1;
    }
};