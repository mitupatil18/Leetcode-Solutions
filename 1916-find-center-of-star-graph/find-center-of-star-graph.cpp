class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        map<int,int> m;
        int ans = 0 , n = e.size();
        for(int i = 0 ; i<e.size();i++)
        {
            m[e[i][1]]++;
            m[e[i][0]]++;
        }
        for(auto x : m)
        {
            if(x.second==n)
            ans = x.first;
        }
        return ans;
    }
};