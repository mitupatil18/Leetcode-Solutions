class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> mat(n,vector<int>(n,1e9));
        for(auto x : edges)
        {
            mat[x[0]][x[1]] = x[2];
            mat[x[1]][x[0]] = x[2];
        }
        for(int k = 0 ; k<n ;k++)
        {
            for(int i = 0 ; i<n ;i++)
            {
                for(int j = 0 ; j<n ;j++)
                {
                    if(mat[i][k]+mat[k][j]<mat[i][j])
                    mat[i][j] = mat[i][k]+mat[k][j];
                    if(i==j)mat[i][j] = 0;
                }
            }
        }
        int ans = INT_MAX, res = -1;
        for(int i = 0 ; i<n ;i++)
        {
            int cnt = 0 ;
            for(int j = 0 ; j<n ;j++)
            {
                cout<<mat[i][j]<<" ";
                if(mat[i][j]<=distanceThreshold && i!=j)cnt++;
            }
            cout<<endl;
            if(cnt<=ans)
            {
                ans = min(ans,cnt);
                res = i;
            }
        }
        return res;
    }
};