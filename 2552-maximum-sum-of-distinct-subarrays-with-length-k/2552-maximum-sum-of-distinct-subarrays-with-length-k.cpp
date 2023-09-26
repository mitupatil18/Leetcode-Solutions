class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long i=0,j=0,sum=0,ans=0;
        unordered_map<long long, long long> mp;
        while(j<nums.size()){
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1<k)
             j++;
            else if(j-i+1==k){
                if(mp.size()==k){
                ans=max(sum,ans);
                sum=sum-nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                   mp.erase(nums[i]);
                i++;
                }
                else {
                    mp[nums[i]]--;
                    if(mp[nums[i]]==0)
                     mp.erase(nums[i]);
                     sum=sum-nums[i];
                     i++;
                }
                j++;
            } 
        }
        return ans;
    }
};