class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int i , j ;
        vector<vector<int>> ans( m.size() , vector<int> (m[0].size() , 1)); 
        copy(m.begin(), m.end(), ans.begin());
        for(i = 0 ; i<m.size() ; i++)
        {
            for(j = 0 ; j<m[0].size() ; j++)
            {
                if(m[i][j]==0)
                {
                    for(int k = 0 ; k<m[0].size() ; k++)
                    ans[i][k] = 0 ;
                    for(int k = 0 ; k<m.size() ; k++)
                    ans[k][j] = 0 ;
                }
            }
        }
        copy(ans.begin(), ans.end(), m.begin());
    }
};