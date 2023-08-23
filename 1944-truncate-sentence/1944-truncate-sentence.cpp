class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v ;
        int i = 0 ;
        string x = "" , ans = "";
        while(i<s.size())
        {
            if(s[i]==' ')
            {
                if(x!="")
                {
                    x = x+" ";
                    v.push_back(x);
                }
                x = "" ;
            }
            else
            x.push_back(s[i]);
            i++ ;
        }
        if(x!="")
        {
            x = x+" ";
            v.push_back(x);
        }
        i = 0 ;
        while(i<k && i<v.size())
        {
            ans = ans+v[i] ;
            i++ ;
        }
        ans.pop_back();
        return ans ;
    }
};