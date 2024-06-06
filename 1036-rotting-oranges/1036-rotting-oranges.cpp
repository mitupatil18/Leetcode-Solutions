class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        int ans = -1 , cnt = 0, org = 0  ;
        queue<pair<int,int>> q;
        for(int i = 0 ; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if(g[i][j]==1 || g[i][j]==2)
                org++;
                if(g[i][j]==2)
                q.push({i,j});
            }
        }
        if(org == 0) return 0;
        while(!q.empty())
        {
            int size = q.size();
            cnt += size;
            for(int i = 0 ; i<size; i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x-1>=0 && g[x-1][y]==1)
                {
                    g[x-1][y] = 2;
                    q.push({x-1,y});
                }
                if(y-1>=0 && g[x][y-1]==1)
                {
                    g[x][y-1] = 2;
                    q.push({x,y-1});
                }
                if(x+1<m && g[x+1][y]==1)
                {
                    g[x+1][y] = 2;
                    q.push({x+1,y});
                }
                if(y+1<n && g[x][y+1]==1)
                {
                    g[x][y+1] = 2;
                    q.push({x,y+1});
                }
            }
            ans++;
        }
        return org == cnt ? ans : -1;
    }
};