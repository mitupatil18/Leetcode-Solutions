class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v(n+1,0);
        for(int i = 0 ; i<trust.size() ; i++)
        {
            v[trust[i][1]]++;
        }
        int ans = -1 ;
        for(int i = 1 ; i<=n ; i++)
        {
            if(v[i]==n-1)
            ans =  i ;
        }
        for(int i = 0 ; i<trust.size() ; i++)
        {
            if(trust[i][0]==ans)
            return -1 ;
        }
        return ans ;
    }
};