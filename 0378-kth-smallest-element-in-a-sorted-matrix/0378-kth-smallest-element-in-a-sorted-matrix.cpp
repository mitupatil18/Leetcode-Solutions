class Solution {
public:
    int kthSmallest(vector<vector<int>>& a, int k) {
        vector<int> v ;
        int n  = a.size() , i , j;
        for(i = 0 ; i<n ; i++)
        {
            for(j = 0 ; j<n ; j++)
            {
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(), v.end());
        return v[k-1];
    }
};