class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0 , j = 0 , ans = 0 ;
        int n = nums.size();
        while(j<n)
        {
            while(i<n && j<n && nums[j]-nums[i]<=2*k)
            j++;
            ans = max(ans,j-i+1);
            i++;   
        }
        return ans-1;
    }
};