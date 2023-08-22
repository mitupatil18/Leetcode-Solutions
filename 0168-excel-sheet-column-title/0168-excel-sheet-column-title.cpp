class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "" ;
        int t = columnNumber;
        vector<char> v;
        char c = 'A' ;
        for(int i = 0 ; i<26 ; i++)
        v.push_back(c++);
        while(t>0)
        {
            int r = (t-1)%26 ;
            char l='A'+r;
            s = l+s;
            t =  (t-1)/26 ;
        }
        return s;
    }
};