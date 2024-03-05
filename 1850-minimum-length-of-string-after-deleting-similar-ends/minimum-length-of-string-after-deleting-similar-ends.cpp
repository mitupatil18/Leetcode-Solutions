class Solution {
public:
    int minimumLength(string s) {
        int i = 0 , j = s.size()-1 , ans = j-i+1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                char c = s[i];
                while(s[i]==c && i<=j)
                i++ ;
                while(s[j]==c && i<j)
                j-- ;
                ans = abs(j-i+1) ;
            }
            else
            break;
        }
        return ans ;
    }
};