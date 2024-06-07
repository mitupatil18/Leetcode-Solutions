class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& mat, int sr, int sc, int color) {
         if (mat[sr][sc] == color) return mat;
        queue<pair<int,int>> q;
        int m= mat.size(), n = mat[0].size();
        q.push({sr,sc});
        int val = mat[sr][sc];
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            mat[x][y] = color;
            if(x-1>=0 && mat[x-1][y]==val)
            {
                q.push({x-1,y});
                mat[x-1][y] = color;
            }
            if(y-1>=0 && mat[x][y-1]==val)
            {
                q.push({x,y-1});
                mat[x][y-1] = color;
            }
            if(x+1<m && mat[x+1][y]==val)
            {
                q.push({x+1,y});
                mat[x+1][y] = color;
            }
            if(y+1<n && mat[x][y+1]==val)
            {
                q.push({x,y+1});
                mat[x][y+1] = color;
            }
        }
        return mat;
    }
};