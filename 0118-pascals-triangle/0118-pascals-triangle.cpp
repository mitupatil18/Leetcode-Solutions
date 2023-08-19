class Solution {
public:
    vector<vector<int>> generate(int n) {
        int i , j;
        vector<vector<int>> ans ;
        ans.push_back({1});
        for(i = 1 ; i<n ; i++)
        {
            vector<int> v ;
            v.push_back(1);
            for(j = 1 ; j<i ; j++)
            {
                v.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans ;
    }
};