class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& p, int w) {
        vector<int> v ;
        int n = p.size() ;
        sort(p.begin(),p.end());
        for(int i = 0 ; i<n ;i++)
        v.push_back(p[i][0]);
        int j = 0, i = 0, cnt = 0 ;
        while(i<n)
        {
            while(j<n && abs(v[j]-v[i])<=w)
            j++ ;
            cnt++;
            i = j ;
        }
        return cnt ;
    }
};