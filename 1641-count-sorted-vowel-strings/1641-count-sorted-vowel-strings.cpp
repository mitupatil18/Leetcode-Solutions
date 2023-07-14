class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1) return 5 ;
        int ans = 0 ;
        vector<int> v(5,1);
        for(int j = 2 ; j<=n ; j++)
        {
            for(int i = 3 ; i>=0 ; i--)
                v[i] += v[i+1];
        }
        for(int i = 0 ; i<5 ;i++)
        ans += v[i];
        return ans ;
    }
};