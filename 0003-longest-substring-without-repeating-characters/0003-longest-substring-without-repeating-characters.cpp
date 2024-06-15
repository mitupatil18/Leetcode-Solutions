class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int ans = 0, j = 0 ;
        for(int i = 0 ; i<s.size();i++)
        {
            while(m.find(s[i])!=m.end())
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                m.erase(s[j]);
                j++;
            }
            m[s[i]]++;
            if(m.size()>ans) ans = m.size();
        }
        return ans;
    }
};