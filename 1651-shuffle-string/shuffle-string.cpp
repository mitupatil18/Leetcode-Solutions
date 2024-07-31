class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> m;
        for(int i = 0 ; i<s.size();i++)
        {
            m[indices[i]] = s[i];
        }
        int i = 0 ;
        for(auto x : m)
        {
            s[i] = x.second;
            i++;
        }
        return s;
    }
};