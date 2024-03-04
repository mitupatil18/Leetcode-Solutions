class Solution {
public:
    int minimumMoves(string s) {
        int ans = 0 , n = s.size() ;
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(s[i]=='X')
            {
                ans++ ;
                s[i] = '0';
                if(i+1<n)
                s[i+1] = '0';
                if(i+2<n)
                s[i+2] = '0';
            }
        }
        return ans ;
    }
};