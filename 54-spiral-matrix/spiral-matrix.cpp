class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<int>  v;
        vector<vector<int>> vis(r, vector<int>(c,0));
        int x1 = 0 , x2 = r-1, y1 = 0 , y2 = c-1;
        while(x1 <= x2 && y1 <= y2) {
            
            for(int j = y1; j <= y2; j++) {
                if (!vis[x1][j]) {
                    v.push_back(matrix[x1][j]);
                    vis[x1][j] = 1;
                }
            }
            x1++;

           
            for(int i = x1; i <= x2; i++) {
                if (!vis[i][y2]) {
                    v.push_back(matrix[i][y2]);
                    vis[i][y2] = 1;
                }
            }
            y2--;

            if(x1 <= x2) {
                for(int j = y2; j >= y1; j--) {
                    if (!vis[x2][j]) {
                        v.push_back(matrix[x2][j]);
                        vis[x2][j] = 1;
                    }
                }
                x2--;
            }

            
            if(y1 <= y2) {
                for(int i = x2; i >= x1; i--) {
                    if (!vis[i][y1]) {
                        v.push_back(matrix[i][y1]);
                        vis[i][y1] = 1;
                    }
                }
                y1++;
            }
        }
        return v;
    }
};
