class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        vector<int> in(3,0);
        vector<int> out(3,0);
        int n = grid.size();
        int c = n/2 , i;
        for(i = 0 ; i<c ;i++)
        {
            in[grid[i][i]]++;
            in[grid[i][n-i-1]]++;
        }
         for( ; i<n;i++)
         {
             in[grid[i][c]]++;
         }
         for(int i = 0 ; i<n ;i++)
         {
             for(int j = 0 ; j<n;j++)
             {
                if(i==j && i<c);
                else if(i==n-j-1 && i<c);
                else if(j==c && i>=c);
                else
                 out[grid[i][j]]++;
             }
         }
        int ans=INT_MAX;
        for(int i=0;i<=2;i++) {
            int costY = in[0]+in[1]+in[2]-in[i];
            int costRem=INT_MAX;
            for(int j=0;j<=2;j++) {
                if(i==j)
                    continue;
                int t = out[0]+out[1]+out[2]-out[j];
                costRem = min(costRem,t);
            }
            ans=min(ans,costY+costRem);
        }
        return ans;
    }
};