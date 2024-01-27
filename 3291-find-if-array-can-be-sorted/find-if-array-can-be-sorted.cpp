class Solution {
public:
    int count_setbits(int N)
    { 
        int cnt=0;
        while(N>0)
        {
            cnt+=(N&1);
            N=N>>1;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        for(int i = 0 ; i<n ;i++)
        {
            v[i] = count_setbits(nums[i]);
        }
        for (int l = 0, r = 0; (l < n) && (r < n); l = r = r + 1) {
            while (((r + 1) < n) && (v[l] == v[r+1]) )
            r++;
            sort(nums.begin() + l, nums.begin() + r + 1);
        }
        for(int i = 0 ; i<n-1 ;i++)
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        
        return true ;
    }
};