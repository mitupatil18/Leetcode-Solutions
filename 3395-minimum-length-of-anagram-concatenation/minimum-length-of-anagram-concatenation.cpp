class Solution {
public:
    int minAnagramLength(string s) {
        int ans = 0, v = INT_MAX;
        map<char,int> m ;
        for(int i = 0 ; i < s.size() ; i++)
            m[s[i]]++ ;
        if(m.size()==1)
            return 1;
        v = m.begin()->second;
        for(auto x : m) {
            if(x.second == 1)
                return s.size();
            else 
                v = __gcd(v,x.second);
        }
        return s.size()/v;
    }
};