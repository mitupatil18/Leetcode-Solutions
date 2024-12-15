class Solution {
public:
    bool find(vector<vector<int>>& adj, int color, int i, vector<int>& col)
    {
        col[i] = color;
        for(auto x : adj[i])
        {
            if(col[x]==-1)
            {
                if(find(adj,!color,x,col)==0)
                return 0;
            }
            else if(col[x]==col[i])
            return 0;
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> col(n,-1);
        for(int i = 0 ; i<n ;i++)
        {
            if(col[i]==-1)
            {
                if(find(adj,0,i,col)==0)
                return 0;
            }
        }
        return 1;
    }
};