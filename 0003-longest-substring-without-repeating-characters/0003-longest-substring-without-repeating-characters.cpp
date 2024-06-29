class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0 , cnt = 0 , ans = 0 ;
        map<char,int> m;
        for( ; i<s.size();i++)
        {
            m[s[i]]++;
            while(m[s[i]]>1 && j<=i)
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                m.erase(s[j]);
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};