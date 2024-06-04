class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        map<char,int> m ;
        int od = 0 , e = 0 , sum= 0 ;
        for(int i = 0 ; i<n ;i++)
        m[s[i]]++;
        for(auto x : m)
        {
            if(x.second%2!=0)
            {
                od = 1;
                sum += x.second-1;
            }
            else
            sum += x.second;
            
        }
        return sum+od;
    }
};