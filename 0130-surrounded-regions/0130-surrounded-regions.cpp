class Solution {
public:
    void solve(vector<vector<char>>& g) {
        int n = g.size(), m = g[0].size();
        vector<vector<int>> v(n, vector<int>(m, 0));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int z = 0;
                if (!v[i][j] && g[i][j] == 'O') {
                    vector<pair<int, int>> vp;
                    v[i][j] = 1;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                        z = 1;
                    vp.push_back({i, j});
                    while (!q.empty()) {
                        int x = q.front().first, y = q.front().second;
                        q.pop();
                        if (x + 1 < n && !v[x + 1][y] && g[x + 1][y] == 'O') {
                            v[x + 1][y] = 1;
                            q.push({x + 1, y});
                            if (x+1 == n - 1 || y == m - 1 || x+1==0 || y==0)
                                z = 1;
                            vp.push_back({x+1, y});
                        }
                        if (x - 1 >= 0 && !v[x - 1][y] && g[x - 1][y] == 'O') {
                            v[x - 1][y] = 1;
                            q.push({x - 1, y});
                            if (x-1 == n - 1 || y == m - 1 || x-1==0 || y==0)
                                z = 1;
                            vp.push_back({x-1, y});
                        }
                        if (y - 1 >= 0 && !v[x][y - 1] && g[x][y - 1] == 'O') {
                            v[x][y - 1] = 1;
                            q.push({x, y - 1});
                            if (x == n - 1 || y-1 == m - 1 || x==0 || y-1==0)
                                z = 1;
                            vp.push_back({x, y-1});
                        }
                        if (y + 1 < m && !v[x][y + 1] && g[x][y + 1] == 'O') {
                            v[x][y + 1] = 1;
                            q.push({x, y + 1});
                            if (x == n - 1 || y+1 == m - 1 || x==0 || y+1==0)
                                z = 1;
                            vp.push_back({x, y+1});
                        }
                    }
                    if(z!=1)
                    {
                        for(auto x : vp)
                        {
                            g[x.first][x.second] = 'X' ;
                        }
                    }
                }
            }
        }
    }
};