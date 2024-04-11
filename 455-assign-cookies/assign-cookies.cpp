class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int cnt = 0 , j = 0 ;
        for(int i = 0 ; i<g.size() && j<s.size() ;i++)
        {
            while(j<s.size() && s[j]<g[i])
            j++;
            if(j<s.size() && g[i]<=s[j])
            {
                cnt++;
                j++;
            }
        }
        return cnt ;
    }
};