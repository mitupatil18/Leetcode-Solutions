class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int m = h.size(), n = h[0].size();
        int ans = INT_MAX;
        vector<vector<int>> vis(m,vector<int>(n,0));
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        pq.push({0,0,0});
        int dx[] = {-1,1,0,0}, dy[] = {0,0,-1,1};
        while(!pq.empty())
        {
            auto f = pq.top();
            pq.pop();
            int effort = get<0>(f);
            int x = get<1>(f);
            int y = get<2>(f);
            if(x==m-1 && y==n-1)return effort;
            if(vis[x][y])continue;
            vis[x][y] = 1;
            for(int i = 0; i<4 ;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n )
                {
                    int newEffort = max(effort, abs(h[nx][ny] - h[x][y]));
                    pq.push({newEffort, nx, ny});
                    // vis[nx][ny] = 1;
                    // pq.push({dif,nx,ny});
                }
            }
        }
        return ans;
    }
};