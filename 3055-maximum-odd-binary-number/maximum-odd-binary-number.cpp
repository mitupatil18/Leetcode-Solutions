class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.begin(),s.end(),greater<int>());
        int j = s.size()-1;
        while(s[j]=='0' && j>=0)
        j--;
        s[j] = '0';
        s[s.size()-1] = '1' ;
        return s;
    }
};