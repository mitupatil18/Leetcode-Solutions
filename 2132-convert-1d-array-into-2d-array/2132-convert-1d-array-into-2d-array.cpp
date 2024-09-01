class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>> v(m, vector<int>(n));
        if(o.size()!=m*n)
        return {};
        int a = 0 , b = 0 ;
        for(int i = 0 ; i<o.size();i++)
        {
            if(b==n)
            {
                a++;
                b = 0 ;
            }
            v[a][b] = o[i];
            b++;
        }
        return v;
    }
};