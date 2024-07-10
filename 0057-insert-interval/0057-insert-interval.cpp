class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newInterval) {
        in.push_back(newInterval);
        vector<vector<int>> v;
        sort(in.begin(),in.end());
        int n = in.size();  
        for(int i = 0 ; i<n;)
        {
            int a = in[i][0], nxt = in[i][1];
            while(i<n && nxt>=in[i][0])
            {
                nxt = max(nxt,in[i][1]);
                i++;
            }
            v.push_back({a,nxt});
        }
        return v;
    }
};