class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0 , r = grid.size() , c = grid[0].size();
        vector<vector<int>> vis(r, vector<int>(c, 0));
        for(int i = 0 ; i<r ;i++)
        {
            for(int j = 0 ; j<c ;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    vis[i][j] = 1;
                    ans++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int x = q.front().first, y = q.front().second;
                        q.pop();
                        if(x+1<r && !vis[x+1][y] && grid[x+1][y]=='1')
                        {
                            vis[x+1][y] = 1;
                            q.push({x+1,y});
                        }
                        if(x-1>=0 && !vis[x-1][y] && grid[x-1][y]=='1')
                        {
                            vis[x-1][y] = 1;
                            q.push({x-1,y});
                        }
                        if(y-1>=0 && !vis[x][y-1] && grid[x][y-1]=='1')
                        {
                            vis[x][y-1] = 1;
                            q.push({x,y-1});
                        }
                        if(y+1<c && !vis[x][y+1] && grid[x][y+1]=='1')
                        {
                            vis[x][y+1] = 1;
                            q.push({x,y+1});
                        }
                    }
                }
            }
        }
        return ans;
    }
};