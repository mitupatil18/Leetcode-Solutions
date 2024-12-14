class Solution {
public:
    void solve(vector<vector<char>>& b) {
        int m = b.size(), n= b[0].size();
        queue<pair<int,int>> q;
        for(int i = 0 ; i<n ;i++)
        {
            if(b[0][i]=='O')
            q.push({0,i});
            if(b[m-1][i]=='O')
            q.push({m-1,i});
        }
        for(int i = 0 ; i<m ;i++)
        {
            if(b[i][0]=='O')
            q.push({i,0});
            if(b[i][n-1]=='O')
            q.push({i,n-1});
        }
        int dx[] = {-1,1,0,0}, dy[] = {0,0,-1,1};
        while(!q.empty())
        {
            auto f = q.front();
            b[f.first][f.second] = 'K';
            q.pop();
            for(int i = 0 ; i<4 ;i++)
            {
                int nx = f.first+dx[i], ny = f.second+dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && b[nx][ny]=='O')
                {
                    q.push({nx,ny});
                }
            }
        }
        for(int i = 0 ; i<m ;i++)
        {
            for(int j = 0 ; j<n ;j++)
            {
                if(b[i][j]=='K')
                b[i][j] = 'O';
                else
                b[i][j] = 'X';
            }
        }
        
    }
};