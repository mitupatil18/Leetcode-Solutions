class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size()-1;
        vector<vector<int>> vis(n+1, vector<int>(n+1, 0));
        for(int i = 0 ; i<m.size() ;i++)
        {
            for(int j = 0 ; j<m[i].size(); j++)
            {
                if(!vis[i][j])
                {
                    swap(m[i][j],m[j][n-i]);
                    vis[i][j] = vis[j][n-i] = 1;
                }
            }
        }
        
    }
};