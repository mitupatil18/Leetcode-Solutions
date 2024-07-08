class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size(), j = 0 , ans = 0;
        map<char,int> m;
        for(int i = 0 ; i<n;i++)
        {
            m[s[i]]++;
            while(m.size()==3)
            {
                m[s[j]]--;
                if(m[s[j]]==0)
                m.erase(s[j]);
                ans += (n-i);
                j++;
            }
        }
        return ans;
    }
};