class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        vector<vector<int> > ans;
        int n = a.size();
        if(n==1)
        {
            ans.push_back({0});
            return ans ;
        }
        vector<int> z = a ;
        sort(z.begin(),z.end());
        int flg = 0 ;
        vector<vector<int>> m(n+1, vector<int>(0)) ;
        for(int i = 0 ; i<a.size() ; i++)
        {
            m[a[i]].push_back(i);
            if(m[a[i]].size()==a[i])
            {
                flg = 1 ;
                ans.push_back(m[a[i]]);
                m[a[i]].clear();
            }
        }
        if(flg==0)
        {
            ans.push_back({0});
            return ans ;
        }
        return ans ;
    }
};