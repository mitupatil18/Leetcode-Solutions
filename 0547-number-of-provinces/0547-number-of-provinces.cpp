class Solution {
public:
    int findCircleNum(vector<vector<int>>& conn) {
        int n = conn.size();
        vector<int> vis(n,0);
        int ans = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(vis[i]==1)
            continue;
            ans++;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x = q.front();
                q.pop();
                vis[x] = 1;
                for(int j = 0 ; j<n ; j++)
                {
                    if(conn[x][j]==1 && !vis[j])
                    {
                        q.push(j);
                    }
                }
            }
        }
        return ans;
    }
};