class Solution {
public:
    bool isPalindrome(string s) {
        string a= "" ;
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(s[i]>=97 && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
            a.push_back(s[i]);
        }
        transform(a.begin(), a.end(), a.begin(), 
              ::toupper); 
        string b = a ;
        reverse(b.begin(),b.end());
        return b==a;
    }
};