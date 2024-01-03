class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mn = p[0] , ans = 0;
        for(int i = 0 ; i<p.size() ;i++)
        {
            int c = p[i]-mn ;
            ans = max(ans,c);
            mn = min(mn,p[i]);
        }
        return ans ;
    }
};