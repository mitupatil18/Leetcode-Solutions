class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int m = img.size(), n = img[0].size();
        int org = img[sr][sc];
        if(org==color) return img;
        img[sr][sc] = color;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int dx[] = {0,0,-1,1}, dy[] = {-1,1,0,0};
        while(!q.empty())
        {
            auto x = q.front();
            q.pop();
            for(int i = 0 ; i<4 ;i++)
            {
                int nx = x.first+dx[i], ny = x.second+dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && img[nx][ny]==org)
                {
                    img[nx][ny]  = color;
                    q.push({nx,ny});
                }
            }
        }
        return img;
    }
};