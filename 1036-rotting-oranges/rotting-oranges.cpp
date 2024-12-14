class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int tot = 0, cnt = 0 ;
        int minutes = 0;
        int m = g.size(), n = g[0].size();
        queue<pair<int,int>> q;
        for(int i = 0; i<m ;i++)
        {
            for(int j = 0; j<n ;j++)
            {
                if(g[i][j]==2)
                q.push({i,j});
                else if(g[i][j]==1)tot++;
            }
        }
        if(q.empty())
        {
            if(tot==0)
            return 0;
            return -1;
        }
        int dx[] = {0,0,-1,1}, dy[] = {-1,1,0,0};
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0 ; i<size ;i++)
            {
                auto f = q.front();
                q.pop();
                for(int i = 0 ; i<4 ;i++)
                {
                    int nx = f.first+dx[i];
                    int ny = f.second+dy[i];
                    if(nx>=0 && nx<m && ny>=0 && ny<n && g[nx][ny]==1)
                    {
                        q.push({nx,ny});
                        g[nx][ny] = 2;
                        cnt++;
                    }
                }
            }
            minutes++;
        }
        if(tot==cnt)
        return minutes-1;
        return -1;
    }
};