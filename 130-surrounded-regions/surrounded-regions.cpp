#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // Mark visited cells
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        // Directions for BFS
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        // Perform BFS for each cell
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!visited[i][j] && grid[i][j] == 'O') {
                    bool touchesBoundary = false;
                    vector<pair<int, int>> componentCells;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = true;
                    
                    while (!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();
                        componentCells.push_back({x, y});
                        
                        if (x == 0 || x == n - 1 || y == 0 || y == m - 1)
                            touchesBoundary = true;
                        
                        for (auto [dx, dy] : directions) {
                            int nx = x + dx;
                            int ny = y + dy;
                            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == 'O') {
                                q.push({nx, ny});
                                visited[nx][ny] = true;
                            }
                        }
                    }
                    
                    if (!touchesBoundary) {
                        for (auto [x, y] : componentCells) {
                            grid[x][y] = 'X';
                        }
                    }
                }
            }
        }
    }
};
