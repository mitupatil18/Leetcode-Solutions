class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            x=x^nums[i]^(i+1);
        }
        
        int twice;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0)twice=abs(nums[i]);
            else nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        int missing=x^twice;
        
        return {twice, missing};
    }
};