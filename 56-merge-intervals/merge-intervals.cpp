class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        int s = intervals[0][0], e = intervals[0][1], n = intervals.size();
        for(int i = 1 ; i<n;i++)
        {
            if(intervals[i][0]<=e)
            {
                e = max(e,intervals[i][1]);
            }
            else
            {
                v.push_back({s,e});
                s = intervals[i][0];
                e = intervals[i][1];
            }
        }
         v.push_back({s,e});
        return v;
    }
};