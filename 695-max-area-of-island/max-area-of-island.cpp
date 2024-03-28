class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int n = g.size() , m = g[0].size(), ans = 0 , z = 0 ;
        vector<vector<int>> vis(g.size(), vector<int>(g[0].size(),0));
        for(int i = 0; i<n ;i++)
        {
            for(int j = 0 ; j<m ;j++)
            {
                if(!vis[i][j] && g[i][j]==1)
                {
                    queue<pair<int,int>> q;
                    z = 0;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int x = q.front().first , y = q.front().second ;
                        vis[x][y] = 1;
                        q.pop();
                        z++;
                        if(x+1<n && !vis[x+1][y] && g[x+1][y]==1)
                        {
                            vis[x+1][y] = 1;
                            q.push({x+1,y});
                            
                        }
                        if(x-1>=0 && !vis[x-1][y] && g[x-1][y]==1)
                        {
                            vis[x-1][y] = 1;
                            q.push({x-1,y});
                            
                        }
                        if(y+1<m && !vis[x][y+1] && g[x][y+1]==1)
                        {
                            vis[x][y+1] = 1;
                            q.push({x,y+1});
                            
                        }
                        if(y-1>=0 && !vis[x][y-1] && g[x][y-1]==1)
                        {
                            vis[x][y-1] = 1;
                            q.push({x,y-1});
                           
                        }
                    }
                    ans = max(ans,z);
                }
            }
        }
        return ans;
    }
};