class Solution {
public:
    vector<int> findArray(vector<int>& a) {
        vector<int> v ;
        int n = a.size() ;
        if (n == 1) {
            return a;
        }
        for(int i = n-1 ; i>0 ; i--)
        {
            a[i] ^= a[i-1] ;
        }
        return a ;
    }
};