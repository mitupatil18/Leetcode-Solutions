#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        int dirx[] = {1, -1, 0, 0};
        int diry[] = {0, 0, 1, -1};
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int r = x + dirx[i];
                int c = y + diry[i];
                if (r >= 0 && c >= 0 && r < n && c < m && dist[r][c] > dist[x][y] + 1) {
                    dist[r][c] = dist[x][y] + 1; 
                    q.push({r, c}); 
                }
            }
        }
        
        return dist;
    }
};
