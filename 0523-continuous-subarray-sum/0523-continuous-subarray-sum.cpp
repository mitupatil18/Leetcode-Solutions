class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> m ;
       int sum= 0 ;
       m[0] = 0 ;
       for(int i = 0 ; i<nums.size() ; i++)
       {
           sum += nums[i];
           int rem = sum%k;
           if(m.find(rem)==m.end())
           m[rem] = i+1 ;
           else if(m[rem]<i)
           return true ;
       } 
       return false; 
    }
};