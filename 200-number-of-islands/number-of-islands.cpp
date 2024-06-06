class Solution {
public:
    int numIslands(vector<vector<char>>& g) {
        int m = g.size(), n = g[0].size(), ans = 0 ;
        for(int i = 0 ; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if(g[i][j]=='1')
                {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    g[i][j] = 0 ;
                    while(!q.empty())
                    {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        if(x-1>=0 && g[x-1][y]=='1')
                        {
                            q.push({x-1,y});
                            g[x-1][y] = '0';
                        }
                        if(y-1>=0 &&  g[x][y-1]=='1')
                        {
                            q.push({x,y-1});
                            g[x][y-1] = '0' ;
                        }
                        if(x+1<m && g[x+1][y]=='1')
                        {
                            q.push({x+1,y});
                            g[x+1][y] = '0';
                        }
                        if(y+1<n &&  g[x][y+1]=='1')
                        {
                            q.push({x,y+1});
                            g[x][y+1] = '0';
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};