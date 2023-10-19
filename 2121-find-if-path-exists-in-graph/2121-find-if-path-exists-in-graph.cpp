class Solution {
public:
      void bfsji(int i,int n, vector<int> adjls[], vector<int>& vis, queue<int>& q){
        vis[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto it:adjls[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n,0);
        queue<int> q;
        q.push(source);
        bfsji(source,n,adj,vis,q);
        if(vis[destination]) return true;
        return false;
    }
};