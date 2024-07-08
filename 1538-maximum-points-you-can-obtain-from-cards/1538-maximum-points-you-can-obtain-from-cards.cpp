class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int sum1 = 0 , sum2 = 0 ;
        for(int i = 0 ; i<k; i++)
        sum1 += c[i];
        int n = c.size(), j = n-1, i = k-1, ans = sum1;
        if(k==n)
        return sum1;
        while(i>=0 && j>=n-k)
        {
            sum1 -= c[i];
            sum2 += c[j];
            ans = max(ans,sum1+sum2);
            i--;
            j--;
        }
        return ans;
    }
};