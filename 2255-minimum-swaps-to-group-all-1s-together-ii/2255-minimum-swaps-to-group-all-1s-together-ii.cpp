class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int i = 0 , j = n-1, cnt = 0 ;
        while(i<n)
        {
            if(nums[i]==1)
            cnt++;
            i++;
        }
        if(cnt==0) return 0;
        vector<int> v(nums.begin(), nums.end());
        v.insert(v.end(), nums.begin(), nums.end());
        n = n*2;
        int  maxi = 0 , ct = 0 ;
        j = 0 , i = 0 ;
        while(j-i<cnt && j<n)
        {
            if(v[j]==1)
            ct++;
            j++;
        }
        maxi =ct;
        while(j<n)
        {
            if(v[i]==1)
            ct--;
            i++;
            if(v[j]==1)
            ct++;
            maxi = max(maxi,ct);
            j++;
        }
        return cnt-maxi;
    }
};