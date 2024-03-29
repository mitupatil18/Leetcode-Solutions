class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mt) {
        vector<int> v;
        int d = 0 , l = 0 , b = mt.size()-1, t = 0 , r = mt[0].size()-1, i , j;
        while(l<=r && t<=b)
        {
            if(d==0)
            {
                for(i = l ; i<=r ; i++)
                {
                    v.push_back(mt[t][i]);
                }
                t++;
                d = 1;
            }
            else if(d==1)
            {
                for(i = t; i<=b ;i++ )
                v.push_back(mt[i][r]);
                r--;
                d = 2;
            }
            else if(d==2)
            {
                for(i = r ; i>=l ;i--)
                v.push_back(mt[b][i]);
                b--;
                d = 3;
            }
            else
            {
                for( i = b ; i>=t ; i--)
                v.push_back(mt[i][l]);
                l++;
                d = 0;
            }

        }
        return v;
    }
};