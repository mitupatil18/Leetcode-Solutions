class Solution {
public:
    void dfs(int i ,vector<int>& vis, vector<vector<int>>& c)
    {
        vis[i] = 1;
        for(int j = 0 ; j<c[i].size() ; j++)
        {
            if(!vis[j] && c[i][j]==1)
            dfs(j,vis,c);
        }
    }
    int findCircleNum(vector<vector<int>>& c) {
        int n = c.size(), ans = 0;
        vector<int> vis(n,0);
        for(int i = 0 ; i<n; i++)
        {
            if(!vis[i])
            {
                ans++ ;
                dfs(i,vis,c);
            }
        }
        return ans;
    }
};