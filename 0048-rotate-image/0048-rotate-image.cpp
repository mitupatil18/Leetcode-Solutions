class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int i , j , k ;
        for(i = 0; i<m.size();i++)
        {
            for(j = 0 ; j<m[0].size(); j++)
            {
                if(i<j)
                {
                    swap(m[i][j],m[j][i]);
                }
            }
        }
        i = 0 , j = m.size()-1,k = 0 ;
        for( ; i<j;i++,j--)
        {
            for(k = 0 ; k<m.size();k++)
            {
                swap(m[k][i], m[k][j]);
            }
        }
    }
};