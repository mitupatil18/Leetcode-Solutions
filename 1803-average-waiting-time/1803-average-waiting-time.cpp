class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double ans = 0.0f;
        int curr = c[0][0] ;
        for(int i = 0 ; i<c.size();i++)
        {
            if(curr<c[i][0])
            curr = c[i][0];
            curr += c[i][1];
            ans += (curr-c[i][0]);
        }
        return ans/c.size() ;
    }
};