class Solution {
public:
    int countSubstrings(string s) {
        int cnt = s.size() ;
        for(int i = 0 ; i<s.size();i++)
        {
            int j  = i+1;
            int k = i;
            while(j<s.size() && k>=0)
            {
                if(s[k]!=s[j])
                break;
                k--;
                j++;
                cnt++;
            }
            j = i+2 ;
            k = i;
            while(j<s.size() && k>=0)
            {
                if(s[k]!=s[j])
                break;
                k--;
                j++;
                cnt++;
            }
        }
        return cnt;
    }
};