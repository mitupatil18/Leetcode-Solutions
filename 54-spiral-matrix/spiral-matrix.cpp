class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        vector<int> v;
        int a = 0 , b = 0 , x = r-1, y = c-1;
        while(a<=x && b<=y)
        {
            for(int j = b; j<=y; j++)
            {
                v.push_back(mat[a][j]);
            }
            a++;
            for(int i = a; i<=x; i++)
            {
                v.push_back(mat[i][y]);
            }
            y--;
            if(a<=x)
            {
                for(int j = y; j>=b; j--)
                {
                    v.push_back(mat[x][j]);
                }
                x--;
            }
            if(b<=y)
            {
                for(int i = x; i>=a; i--)
                {
                    v.push_back(mat[i][b]);
                }
                b++;
            }
        }
        return v;
    }
};