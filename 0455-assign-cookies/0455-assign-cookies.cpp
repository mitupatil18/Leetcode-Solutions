class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int n = g.size(), m = s.size(), ans = 0 , i = n-1, j=m-1;
        if(n==0 || m==0)
        return 0;
        while(g[i]>s[j])
        i--;
        while(i>=0 && j>=0)
        {
            if(g[i]<=s[j])
            {
                i--;
                j--;
                ans++ ;
            }
            else
            i--;
        }
        return ans;
    }
};