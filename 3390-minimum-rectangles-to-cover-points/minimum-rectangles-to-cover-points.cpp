class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& p, int w) {
        int n = p.size() ;
        sort(p.begin(),p.end());
        int j = 0, i = 0, cnt = 0 ;
        while(i<n)
        {
            while(j<n && abs(p[j][0]-p[i][0])<=w)
            j++ ;
            cnt++;
            i = j ;
        }
        return cnt ;
    }
};