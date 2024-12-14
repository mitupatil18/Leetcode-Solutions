class Solution {
public:
    void dfs(int i , vector<vector<int>>& adj, vector<int>& vis)
    {
        vis[i] = 1;
        for(auto x : adj[i])
        {
            if(!vis[x])
            dfs(x,adj,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        int n = g.size(), ans = 0;
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);
        for(int i = 0 ; i<g.size(); i++)
        {
            for(int j = 0 ; j<g[0].size();j++)
            {
                if(g[i][j]==1 && i!=j)
                adj[i].push_back(j);
            }
        }
        for(int i = 0; i<n ;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis);
                ans++;
            }
        }
        return ans;
    }
};