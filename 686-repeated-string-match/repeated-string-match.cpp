class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string str = a ;
        int cnt = 1 ;
        while(a.size()<b.size())
        {
            a += str ;
            cnt++ ;
        }
        if(a.find(b)!=-1)
        return cnt ;
        else
        {
             a += str ;
             cnt++ ;
            if(a.find(b)!=-1)
            return cnt ;
            return -1 ;
        }
    }
};