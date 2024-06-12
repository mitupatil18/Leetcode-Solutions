class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        priority_queue<pair<int, pair<int,int>>,  
        vector< pair<int, pair<int,int>>>,  
        greater< pair<int, pair<int,int>>>> pq;
        int n = h.size(), m = h[0].size();
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0] = 0 ;
        pq.push({0,{0,0}});
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            int diff = it.first, r = it.second.first , c = it.second.second;
            if(r==n-1 && c==m-1) return diff;
            for(int i = 0 ; i<4 ;i++)
            {
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr>=0 && nc>=0 && nr<n && nc<m)
                {
                    int newef = max(abs(h[r][c]-h[nr][nc]), diff);
                    if(newef<dist[nr][nc])
                    {
                        dist[nr][nc] = newef;
                        pq.push({newef,{nr,nc}});
                    }
                }
            }
        }
        return 0;
    }
};