class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int> v;
        int m = mat.size(), n = mat[0].size();
        for(int i = 0 ; i<m;i++)
        {
            int mini = *min_element(mat[i].begin(),mat[i].end());
            int j, maxi = mini;
            for(j = 0 ; j<n;j++)
            {
                if(mat[i][j]==mini)
                break;
            }
            for(int k = 0 ; k<m;k++)
            {
                maxi = max(maxi,mat[k][j]);
            }
            if(maxi==mini)
            v.push_back(maxi);
        }
        return v;
    }
};