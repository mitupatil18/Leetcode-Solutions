class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        if(k>=2*n)
        k = k%(2*n);
        if(k>=n)
        {
            k %= n ;
            return (n-k);
        }
        else
        return k;
    }
};