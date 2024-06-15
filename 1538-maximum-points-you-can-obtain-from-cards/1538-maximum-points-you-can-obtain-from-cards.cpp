class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int lsum = 0 , rsum = 0 , ans= 0 ;
        int i = 0 , n = cp.size(), j = n-1 ;
        for(i = 0 ; i<k;i++)
        lsum += cp[i];
        if(k==n)
        return lsum;
        ans = lsum;
        j = n-1;
        i = k-1;
        while(i>=0 && j>=n-k)
        {
            lsum = lsum-cp[i];
            rsum = rsum+cp[j];
            ans = max(ans,lsum+rsum);
            i--;
            j--;
        }
        return ans;
    }
};