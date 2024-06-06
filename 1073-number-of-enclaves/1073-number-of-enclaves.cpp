class Solution {
public:
    int numEnclaves(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size(), ans = 0 ;
        queue<pair<int,int>> q;
        for(int i = 0 ; i<m ; i++)
        {
            if(g[i][0]==1)
            q.push({i,0});
            if(g[i][n-1]==1)
            q.push({i,n-1});
        }
        for(int i = 0 ; i<n ; i++)
        {
            if(g[0][i]==1)
            q.push({0,i});
            if(g[m-1][i]==1)
            q.push({m-1,i});
        }
        while(!q.empty())
        {
            int x = q.front().first, y = q.front().second;
            q.pop();
            g[x][y] = 0;
            if(x-1>=0 && g[x-1][y]==1)
            {
                q.push({x-1,y});
                g[x-1][y] = 0;
            }
            if(y-1>=0 && g[x][y-1]==1)
            {
                q.push({x,y-1});
                g[x][y-1] = 0;
            }
            if(x+1<m && g[x+1][y]==1)
            {
                q.push({x+1,y});
                g[x+1][y] = 0;
            }
            if(y+1<n && g[x][y+1]==1)
            {
                q.push({x,y+1});
                g[x][y+1] = 0;
            }
        }
        for(int i = 0 ; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if(g[i][j]==1)
                ans++;
            }
        }
        return ans;
    }
};