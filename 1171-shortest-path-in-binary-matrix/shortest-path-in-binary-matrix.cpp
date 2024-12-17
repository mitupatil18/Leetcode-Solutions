class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        queue<pair<int,int>> q;
        int ans = 1 ;
        int n = g.size();
        if(g[0][0]==1 || g[n-1][n-1]) return -1;
        vector<vector<int>> vis(n,vector<int>(n,0));
        q.push({0,0});
        vis[0][0] = 1;
        int dx[] = {-1,-1,-1,0,1,1,1,0};
        int dy[] = {-1,0,1,1,1,0,-1,-1};
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0; i<size ;i++)
            {
                auto f = q.front();
                int x = f.first, y = f.second;
                if(x==n-1 && y==n-1)return ans;
                vis[x][y] = 1;
                q.pop();
                for(int j = 0 ; j<8 ;j++)
                {
                    int nx = x+dx[j];
                    int ny = y+dy[j];
                    if(nx>=0 && ny>=0 && nx<n && ny<n && g[nx][ny]==0 && !vis[nx][ny])
                    {
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};