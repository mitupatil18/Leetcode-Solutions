class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i = 0, cnt = 0 , sum = 0 , n  = nums.size() ;
         while(i!=n){
            if(nums[i]%2!=0)
            nums[i]=1;
            else
            nums[i]=0;
            i++;
        }
        map<int,int> m;
        i = 0 ;
        while(i<n)
        {
            sum += nums[i];
            if(sum==k)
            cnt++;
            if(m.find(sum-k)!=m.end())
            cnt += m[sum-k];
            m[sum]++;
            i++ ;
        }
        return cnt ;
    }
};