class Solution {
public:
    int numIslands(vector<vector<char>>& g) {
        
        int n = g.size() , m = g[0].size();
        vector<vector<int>> v( n , vector<int> (m, 0)); 
        int ans = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            for(int j = 0 ; j<m ;j++)
            {
                if(!v[i][j] && g[i][j]=='1')
                {
                    v[i][j] = 1;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int x = q.front().first , y = q.front().second;
                        q.pop();
                        if(x+1<n && !v[x+1][y] && g[x+1][y]=='1')
                        {
                            v[x+1][y] = 1;
                            q.push({x+1,y});
                        }
                        if(x-1>=0 && !v[x-1][y] && g[x-1][y]=='1')
                        {
                            v[x-1][y] = 1;
                            q.push({x-1,y});
                        }
                        if(y-1>=0 && !v[x][y-1] && g[x][y-1]=='1')
                        {
                            v[x][y-1] = 1;
                            q.push({x,y-1});
                        }
                        if(y+1<m && !v[x][y+1] && g[x][y+1]=='1')
                        {
                            v[x][y+1] = 1;
                            q.push({x,y+1});
                        }
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};