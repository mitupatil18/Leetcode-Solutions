class Solution {
public:
    int numIslands(vector<vector<char>>& a) {
        int i = 0 , j = 0 , l = 0 ;
        vector<vector<int>> v( a.size() , vector<int> (a[0].size(), 0)); 
        for(i = 0 ; i<a.size() ; i++)
        {
            for(j = 0 ;j<a[i].size() ; j++)
            {
                if(a[i][j]=='1' && v[i][j]==0)
                {
                    queue<pair<int,int>> q ;
                    l++ ;
                    v[i][j] = 1 ;
                    q.push({i,j});
                    int r , c ;
                    while(!q.empty())
                    {
                        r = q.front().first ;
                        c = q.front().second ;
                        if(r-1>=0 && a[r-1][c]=='1' && v[r-1][c]==0)
                        {
                            v[r-1][c] = 1 ;
                            q.push({r-1,c});
                        }
                        if(c-1>=0 && a[r][c-1]=='1' && v[r][c-1]==0)
                        {
                            v[r][c-1] = 1 ;
                            q.push({r,c-1});
                        }
                        if(r+1<a.size() && a[r+1][c]=='1' && v[r+1][c]==0)
                        {
                            v[r+1][c] = 1 ;
                            q.push({r+1,c});
                        }
                        if(c+1<a[0].size() && a[r][c+1]=='1' && v[r][c+1]==0)
                        {
                            v[r][c+1] = 1 ;
                            q.push({r,c+1});
                        }
                    q.pop();
                    }
                }
            }
        }
        return l ;
    }
};