class Solution {
public:
    int numEnclaves(vector<vector<int>>& g) {
        queue<pair<int,int>> q;
        int m = g.size(), n = g[0].size();
        for(int i = 0 ; i<n ;i++)
        {
            if(g[0][i]==1)
            q.push({0,i});
            if(g[m-1][i]==1)
            q.push({m-1,i});
        }
        for(int i = 0 ; i<m ;i++)
        {
            if(g[i][0]==1)
            q.push({i,0});
            if(g[i][n-1]==1)
            q.push({i,n-1});
        }
        int dx[] = {-1,1,0,0}, dy[] = {0,0,-1,1};
        while(!q.empty())
        {
            auto f = q.front();
            g[f.first][f.second] = 0;
            q.pop();
            for(int i = 0 ; i<4 ;i++)
            {
                int nx = f.first+dx[i], ny = f.second+dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && g[nx][ny]==1)
                {
                    q.push({nx,ny});
                    g[nx][ny] = 0;
                }
            }
        }
        int ans = 0;
        for(int i = 0 ; i<m ;i++)
        {
            for(int j = 0 ; j<n ;j++)
            {
                if(g[i][j]==1)
                ans++;
            }
        }
        return ans;
    }
};