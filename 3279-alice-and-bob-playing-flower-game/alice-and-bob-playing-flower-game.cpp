class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans = 0 ;
        for(int i = 1 ; i<=n ;i++)
        {
            if(i%2==0)
            ans += (m%2==0?m/2:(m/2)+1)  ;
            else
            ans += m/2 ;
        }
        return ans ;
    }
};