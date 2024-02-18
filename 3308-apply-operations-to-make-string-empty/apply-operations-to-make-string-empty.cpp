class Solution {
public:
    string lastNonEmptyString(string s) {
        int mx = 0;
        string z;
        unordered_map<char,int> m ;
        for(int i = 0 ; i<s.size();i++)
        {
            m[s[i]]++;
            mx= max(mx,m[s[i]]);
        }
        for( int i = s.size()-1 ; i>=0 ; i--)
        {
            if(m[s[i]]==mx)
            {
                z.push_back(s[i]);
                m[s[i]]--;
            }
        }
        reverse (z.begin(),z.end());
        return z;
    }
};