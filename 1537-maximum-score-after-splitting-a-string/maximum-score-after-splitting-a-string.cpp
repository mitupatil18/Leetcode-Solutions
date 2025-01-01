class Solution {
public:
    int maxScore(string s) {
        int zeros = 0 , ones = 0 , ans = 0 ;
        for(auto x : s)
        {
            if(x=='1')
            ones++;
        }
        for(int i = 0 ; i<s.size()-1 ;i++)
        {
            if(s[i]=='0')
            zeros++;
            else if(ones>0)
            ones--;
            ans = max(ans,zeros+ones);
        }
        return max(ans,zeros+ones);
    }
};