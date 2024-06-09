class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),i=0,count=0,sum=0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        while(i<n){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) 
            rem+=k;
            if(mp[rem]!=0) 
            count+=mp[rem];
            mp[rem]++;
            i++;
        }
        return count;
    }
};