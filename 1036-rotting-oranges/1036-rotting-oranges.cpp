class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        queue<pair<int,int>> q;
        int m = g.size() , n = g[0].size();
        int ans = 0 , cnt = 0 ;
        for(int i = 0 ; i<g.size() ; i++)
        {
            for(int j = 0; j<g[0].size() ; j++)
            {
                if(g[i][j]!=0)
                cnt++;
                if(g[i][j]==2)
                 q.push({i,j});
            }
        }
        int days =  0 ;
        while(!q.empty())
        {
            int size = q.size() ;
            ans += size ;
            for(int i = 0 ; i<size; i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x-1>=0 && g[x-1][y]==1 )
                {
                    q.push({x-1,y});
                    g[x-1][y] = 2;
                }
                if(y-1>=0 && g[x][y-1]==1 )
                {
                    q.push({x,y-1});
                    g[x][y-1] = 2;
                } 
                if(x+1<m && g[x+1][y]==1)
                {
                    q.push({x+1,y});
                    g[x+1][y] = 2;
                }
                if(y+1<n && g[x][y+1]==1 )
                {
                    q.push({x,y+1});
                    g[x][y+1] = 2;
                }
            }
            if(!q.empty() ) days++;
        }
        return ans==cnt?days:-1;
    }
};