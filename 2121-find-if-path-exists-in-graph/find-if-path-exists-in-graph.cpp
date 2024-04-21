class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> vis(n, 0);
        vector<vector<int>> adjList(n);
        for (const auto& edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]); 
        }
        queue<int> q;
        q.push(source);
        vis[source] = 1;
        while (!q.empty()) {
            int node = q.front();
            q.pop();

            if (node == destination)
                return true; 

            for (int neighbor : adjList[node]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }

        return false; 
    }
};
