class Solution {
public:
    int minimumLength(string s) {
        int i = 0 , j = s.size()-1 ;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                char c = s[i];
                while(s[i]==c && i<=j)
                i++ ;
                while(s[j]==c && i<j)
                j-- ;
            }
            else
            break;
        }
        return j-i+1 ;
    }
};