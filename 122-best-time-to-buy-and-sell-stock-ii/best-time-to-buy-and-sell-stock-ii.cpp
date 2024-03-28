class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans = 0;
        for(int i = 0; i<p.size()-1 ;i++)
        {
            int t = 0 ;
            if(p[i]<p[i+1])
            t = p[i+1]-p[i];
            ans += t;
        }
        return ans;
    }
};