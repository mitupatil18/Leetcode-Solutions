class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0,n=nums.size(); 
        for(int i=0;i<nums.size();i++)
        {  
            if(nums[i]!=0) 
            nums[start++]=nums[i];
        }
        while(start<n) 
        nums[start++]=0;
    }
};