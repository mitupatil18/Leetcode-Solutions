class Solution {
public:
    int ans = 0 ;
    void help(int i , vector<vector<int>> &v,int l , vector<int>& tmp)
    {
        if(i==v.size())
        {
            for(auto a:tmp)
            if(a!=0) return;
            ans = max(ans,l);
            return ;
        }
        help(i+1,v,l,tmp);
        tmp[v[i][0]]--;
        tmp[v[i][1]]++;
        help(i+1,v,l+1,tmp);
        tmp[v[i][0]]++;
        tmp[v[i][1]]--;
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> tmp(n,0);
        help(0,requests,0,tmp);
        return ans ;
    }
};