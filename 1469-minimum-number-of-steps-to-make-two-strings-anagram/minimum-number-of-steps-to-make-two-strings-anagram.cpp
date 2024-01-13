class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> a , b;
        for(int i = 0 ; i<s.size();i++)
        a[s[i]]++;
        for(int i = 0 ; i<t.size();i++)
        b[t[i]]++;
        int c = 0 ;
        for(auto & x :a)
        {
            if(b.find(x.first)!=b.end())
            {
                int cnt = b[x.first];
                if(cnt<x.second)
                c += x.second-cnt ;
            }
            else
            {
                c += (x.second);
            }
        }
        return c ;
    }
};