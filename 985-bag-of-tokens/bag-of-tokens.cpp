class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int power) {
        sort(t.begin(),t.end());
        int i = 0 , j = t.size()-1 , s = 0 , ans = 0  ;
        while(i<=j)
        {
            if( power>=t[i])
            {
                power -= t[i++];
                s++;
                ans = max(ans,s);
            }
            else if(s>0)
            {
                s--;
                power += t[j--];
            }
            else
            break;
        }
        return ans;
    }
};