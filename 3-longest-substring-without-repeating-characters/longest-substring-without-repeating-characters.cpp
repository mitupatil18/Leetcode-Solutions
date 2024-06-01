class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int ans = 0 , cnt = 0, j = 0, n = s.size() ;
        for(int i = 0 ;i<n ;i++)
        {
            m[s[i]]++;
            cnt++;
            while(m[s[i]]>1)
            {
                m[s[j]]--;
                cnt--;
                if(m[s[j]]==0)
                {
                    m.erase(s[j]);
                }
                j++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};