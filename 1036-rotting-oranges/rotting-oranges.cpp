class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int cnt = 0, oranges = 0, days = 0  , r = g.size(), c = g[0].size() ;
        queue<pair<int,int>> q;
        for(int i = 0 ; i<r ;i++)
        {
            for(int j = 0 ; j<c ; j++)
            {
                if(g[i][j]!=0)
                cnt++;
                if(g[i][j]==2)
                q.push({i,j});
            }
        }
        while(!q.empty())
        {
            int k  = q.size();
            oranges += k ;
            while(k--)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(x-1>=0 && g[x-1][y]==1)
                {
                    q.push({x-1,y});
                    g[x-1][y] = 2;
                   
                }
                if(y-1>=0 && g[x][y-1]==1)
                {
                    q.push({x,y-1});
                    g[x][y-1]=2;
                    
                }
                if(x+1<r && g[x+1][y]==1)
                {
                    q.push({x+1,y});
                    g[x+1][y]=2 ;
                    
                }
                if(y+1<c && g[x][y+1]==1)
                {
                    q.push({x,y+1});
                    g[x][y+1]=2;
                    
                }
            }
            if(!q.empty() ) days++;;
        }
        return oranges==cnt?days:-1;
    }
};