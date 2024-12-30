class Solution {
public:
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int src)
    {
        visited[src] = true;
        for(int i : adj[src])
            if(!visited[i])
                dfs(adj, visited, i);
    }
    int makeConnected(int n, vector<vector<int>>& g) {
        if(g.size()<n-1)return -1;
        vector<vector<int>> adj(n);
        for(auto v : g)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> vis(n,0);
        int comp = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            if(!vis[i])
            {
                dfs(adj,vis,i);
                comp++;
            }
        }
        return comp-1;
    }
};