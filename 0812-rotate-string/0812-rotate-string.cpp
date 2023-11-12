class Solution {
public:
   bool rotateString(string s, string g) {
       if(s.size()!=g.size())
       return 0;
    string k = s+s ;
    if(k.find(g)!=string::npos)
    return 1;
    return 0;
}

};