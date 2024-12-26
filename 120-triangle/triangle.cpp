class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int m = t.size();
        for(int i = 1; i<m ;i++)
        {
            for(int j = 0 ; j<=i ;j++)
            {
                cout<<t[i][j]<<" ";
                if(j!=0 && j!=i)
                t[i][j] = min(t[i-1][j-1], t[i-1][j])+t[i][j];
                else if(j==0)
                t[i][j] = t[i-1][j]+t[i][j];
                else
                t[i][j] = t[i-1][j-1]+t[i][j];
            }
            cout<<endl;
        }
        int ans = t[m-1][0];
        for(int i = 0; i<t[m-1].size(); i++)
        ans = min(ans,t[m-1][i]);
        return ans;
    }
};