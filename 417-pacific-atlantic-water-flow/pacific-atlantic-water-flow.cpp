class Solution {
public:
    bool solve(vector<vector<int>>& h, int i, int j, vector<vector<int>>& vis) {
        int m = h.size(), n = h[0].size();
        queue<pair<int, int>> q;
        int a1 = 0, a2 = 0;
        q.push({i, j});
        int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};

        while (!q.empty()) {
            auto f = q.front();
            q.pop();
            int x = f.first, y = f.second;
            vis[x][y] = 1;

            if (x == 0 || y == 0) a1++;
            if (x == m - 1 || y == n - 1) a2++;
            if (a1 > 0 && a2 > 0) return true;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !vis[nx][ny] && h[nx][ny] <= h[x][y]) {
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
        return false;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        vector<vector<int>> ans;
        int m = h.size(), n = h[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Reset vis array using fill
                for (int i = 0; i < m; i++) {
                    std::fill(vis[i].begin(), vis[i].end(), 0);
                }

                bool res = solve(h, i, j, vis);
                if (res) ans.push_back({i, j});
            }
        }
        return ans;
    }
};
