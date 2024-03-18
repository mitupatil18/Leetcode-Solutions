class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        vector<vector<int>> g(n+1,vector<int>(n+1, 100000)) ;
        for(int j = 1 ; j<n ;j++)
            g[j][j+1] = g[j+1][j] = 1;
        g[x][y]= g[y][x] = 1;
        for(int k = 1 ; k<=n ;k++)
        {
            for(int i = 1 ; i<=n ;i++)
            {
                for(int j = 1 ; j<=n ;j++)
                {
                    g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
                }
            }
        }
        vector<int> res(n);
        for(int i = 1 ; i<=n ;i++)
        {
            for(int j = 1 ; j<=n ;j++)
            {
                if(i!=j)
                {
                    res[g[i][j]-1]++ ;
                }
            }
        }
        return res;
    }
};