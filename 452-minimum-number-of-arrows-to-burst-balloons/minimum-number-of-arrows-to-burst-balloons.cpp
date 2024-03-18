class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int cnt = 0 , mx = points[0][1], mn = points[0][0] , ans = 0 , i;
        for( i = 1 ; i<points.size();i++)
        {
            if(points[i][0]<=mx && points[i][0]>=mn)
            {
                mx = min(mx,points[i][1]);
                mn = max(mn,points[i][0]);
            }
            else
            {
                mx = points[i][1];
                mn = points[i][0];
                ans ++ ;
                cnt = 0 ;
            }
        }
        return ans+1;
    }
};