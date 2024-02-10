class Solution {
    public int maxProduct(int[] nums) {
        int pro = 1, maxi = nums[0];
        for(int i = 0 ; i<nums.length ;i++)
        {
            pro *= nums[i];
            maxi = Math.max(pro,maxi);
            if(pro==0)
            pro = 1 ;
        }
        pro  =1;
        for(int i = nums.length-1 ; i>=0 ;i--)
        {
            pro *= nums[i];
            maxi = Math.max(pro,maxi);
            if(pro==0)
            pro = 1 ;
        }
        return maxi;
    }
}