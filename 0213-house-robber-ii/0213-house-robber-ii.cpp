
class Solution {
public:
    int find(vector<int>& nums)
    {
        int prev = nums[0];
        int prev2 = 0 , n = nums.size();
        if(n==1) return nums[0];
        for(int i = 1 ; i<n ; i++)
        {
            int take = nums[i];
            if(i>1)
            take += prev2 ;
            int notTake = prev ;
            int cur = max(take,notTake);
            prev2 = prev ;
            prev = cur ;
        }
        return prev ;
    }
    int rob(vector<int>& nums) {
        vector<int> a, b ;
        int n = nums.size();
        if(n==1) return nums[0];
        for(int i = 0 ; i<n ; i++)
        {
            if(i!=0)
                a.push_back(nums[i]);
            if(i!=n-1)
                b.push_back(nums[i]);
        }
        return max(find(a),find(b));
    }
};