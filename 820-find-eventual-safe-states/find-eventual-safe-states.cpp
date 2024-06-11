class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        int V = g.size();
        vector<int> adj[V];
         vector<int> ind(V,0);
         vector<int> v;
        for(int i = 0 ; i<g.size();i++)
        {
            for(auto x : g[i])
            {
                adj[x].push_back(i);
                ind[i]++;
            }
        }
        queue<int> q;
        for(int i  = 0 ; i<V ; i++)
        {
            if(ind[i]==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            v.push_back(x);
            for(auto it : adj[x])
            {
                ind[it]--;
                if(ind[it]==0)
                q.push(it);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};