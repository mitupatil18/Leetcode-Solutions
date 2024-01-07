class Solution {
public:
    int missingInteger(vector<int>& nums) {
       int s = nums[0], n = nums.size(), i , j;
        if(n==1)
        return nums[0]+1 ;
       for(i = 1 ; i<n;i++)
       {
           if(nums[i]==nums[i-1]+1)
           s += nums[i];
           else
           break;
       } 
       cout<<s<<" "<<i;
       while(1)
       {
           for(j = 0; j<n ; j++)
           {
               if(nums[j]==s)
               break;
           }
           if(j==n)
           return s ;
           else
           s++ ;
       }
    }
};