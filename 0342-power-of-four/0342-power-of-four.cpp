class Solution {
public:
    bool isPowerOfFour(int n) {
        long long int x = 1 ;
        while(x<=n)
        {
            if(x==n)
            return true ;
            x = x*4 ;
        }
        return false;
    }
};