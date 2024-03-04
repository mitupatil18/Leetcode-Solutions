class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m1 ;
        map<char,char> m2;
        if(s.size()!=t.size())
        return 0;
        for(int i = 0 ; i<s.size();i++)
        {
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        for(int i = 0 ; i<s.size();i++)
        {
            if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i])
            return 0;
        }
        return 1;
    }
};