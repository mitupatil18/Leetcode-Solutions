class Solution {
public:
    void solve(vector<vector<int>>& g , int s, int t, vector<vector<int>>& ans , vector<int> ds)
    {
        if(s==t)
        {
            ds.push_back(s);
            ans.push_back(ds);
        }
        ds.push_back(s);
        for(auto it : g[s])
        {
            solve(g,it,t,ans,ds);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> ds ;
        int t = graph.size() ;
        solve(graph, 0,t-1,ans,ds);
        return ans ;
    }
};