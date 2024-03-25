class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& m) {
        vector<int> v;
        int x = m.size() , y = m[0].size();
        for(int i = 0 ; i<m.size() ; i++)
        {
            for(int j= 0 ; j<m[i].size() ;j++)
            {
                if(i>0 && m[i][j]<m[i-1][j])
                continue;
                if(i<x-1 && m[i][j]<m[i+1][j])
                continue;
                if(j>0 && m[i][j]<m[i][j-1])
                continue;
                if(j<y-1 && m[i][j]<m[i][j+1])
                continue;
                return {i,j};
            }
        }
        return v;
    }
};