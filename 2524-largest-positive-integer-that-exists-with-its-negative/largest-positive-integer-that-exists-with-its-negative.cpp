class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0 , n = nums.size(), j = n-1;
        while(i<j)
        {
            if(nums[i]==-nums[j])
            return nums[j] ;
            if(nums[i]<-nums[j])
            i++; 
            else
            j--;
        }
        return -1;
    }
};