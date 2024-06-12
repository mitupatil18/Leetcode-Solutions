class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int n = g.size();
        if (g[0][0] == 1 || g[n-1][n-1] == 1) return -1;
        if (n == 1) return 1;
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        dist[0][0] = 1;
        q.push({1, {0, 0}});
        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int r = it.second.first;
            int c = it.second.second;

            for (int i = 0; i < 8; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && g[nr][nc] == 0 && dis + 1 < dist[nr][nc]) {
                    dist[nr][nc] = dis + 1;
                    if (nr == n - 1 && nc == n - 1)
                        return dis + 1;
                    q.push({dis + 1, {nr, nc}});
                }
            }
        }

        return -1;
    }
};
