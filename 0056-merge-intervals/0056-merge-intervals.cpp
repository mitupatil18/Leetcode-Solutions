class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>> v;
        int s = in[0][0], e = in[0][1], n = in.size();
        for(int i = 1 ; i<n;i++)
        {
            if(in[i][0]<=e)
            e = max(e,in[i][1]);
            else
            {
                v.push_back({s,e});
                s = in[i][0];
                e = in[i][1];
            }
        }
         v.push_back({s,e});
        return v;
    }
};