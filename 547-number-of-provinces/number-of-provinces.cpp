class Solution {
public:
    int findCircleNum(vector<vector<int>>& conn) {
        int n = conn.size();
        vector<int> v(n,0);
        vector<vector<int>> e(n);
        for(int i = 0; i<n ;i++)
        {
            for(int j = 0 ; j<n ;j++)
            {
                if(conn[i][j]==1)
                {
                    e[i].push_back(j);
                }
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i<n ;i++)
        {
            if(v[i]==1) continue;
            ans++;
            v[i] = 1;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x = q.front();
                q.pop();
                for(int j = 0 ; j<e[x].size() ;j++)
                {
                    if(v[e[x][j]]==0)
                    {
                        v[e[x][j]] = 1;
                        q.push(e[x][j]);
                    }
                }
            }
        }
        return ans;
    }
};