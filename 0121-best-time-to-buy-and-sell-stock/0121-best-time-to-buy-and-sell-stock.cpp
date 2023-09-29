class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()==1)
        return 0;
        int mini = p[0] , profit = 0 ;
        for(int i = 1 ; i<p.size() ; i++)
        {
            int cost = p[i]-mini ;
            profit = max(profit,cost);
            mini = min(mini,p[i]);
        }
        return profit ;
    }
};