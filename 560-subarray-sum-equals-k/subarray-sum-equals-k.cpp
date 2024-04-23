class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int> st;
       int sum = 0, ans = 0 ;
       st[0] = 1 ;
       for(int i = 0 ; i<nums.size() ; i++)
       {
            sum += nums[i];
            int diff = sum-k;
            if(st.find(diff)!=st.end())
            ans+= st[diff] ;
            st[sum]++;
       } 
       return ans;
    }
};