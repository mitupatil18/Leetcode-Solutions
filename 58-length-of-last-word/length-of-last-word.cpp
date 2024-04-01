class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size()-1, cnt = 0 ;
        while(j>=0)
        {
            if(s[j]!=' ')
            break;
            j--;
        }
        while(j>=0)
        {
            if(s[j]==' ')
            break;
            j--;
            cnt++;
        }
        return cnt;
    }
};