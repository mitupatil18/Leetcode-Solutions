class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x = "" , y = "" ;
        int i = 0 ;
        for( ; i<s.length();i++)
        {
            if(s[i]=='#' && x.length()>0)
                x.pop_back();
            else if(s[i]!='#')
                x.push_back(s[i]);
        }
        for(i = 0  ; i<t.length();i++)
        {
            if(t[i]=='#' && y.length()>0)
                y.pop_back();
            else if(t[i]!='#')
                y.push_back(t[i]);
        }
        if(x==y) return true ;
        else return false ;
    }
};