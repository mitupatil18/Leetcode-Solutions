class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size() , m = land[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> ans;
        for(int i = 0 ; i<n ;i++)
        {
            for(int j = 0 ; j<m ;j++)
            {
                if(land[i][j]==1 && !vis[i][j])
                {
                    vis[i][j] = 1;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    pair<int,int> mx , mn;
                    mx.first = mn.first = i;
                    mx.second = mn.second = j;
                    while(!q.empty())
                    {
                        int x = q.front().first , y = q.front().second;
                        q.pop();
                        if(x>0 && land[x-1][y]==1 && !vis[x-1][y])
                        {
                            vis[x-1][y] = 1;
                            q.push({x-1,y});
                            if(x-1<mn.first)
                            {
                                mn.first= x-1;
                            }
                        }
                        if(y>0 && land[x][y-1]==1 && !vis[x][y-1])
                        {
                            vis[x][y-1] = 1;
                            q.push({x,y-1});
                            if(y-1<mn.second)
                            {
                                mn.second= y-1;
                            }
                        }
                        if(x+1<n && land[x+1][y]==1 && !vis[x+1][y])
                        {
                            vis[x+1][y] = 1;
                            q.push({x+1,y});
                            if(x+1>mx.first)
                            {
                                mx.first= x+1;
                            }
                        }
                        if(y+1<m && land[x][y+1]==1 && !vis[x][y+1])
                        {
                            vis[x][y+1] = 1;
                            q.push({x,y+1});
                            if(y+1>mx.second)
                            {
                                mx.second= y+1;
                            }
                        }
                    
                    }
                    ans.push_back({mn.first,mn.second,mx.first,mx.second});
                }
            }
        }
        return ans;
    }
};