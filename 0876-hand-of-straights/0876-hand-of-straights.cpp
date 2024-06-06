class Solution {
public:
    bool isNStraightHand(vector<int>& h, int g) {
        int n = h.size();
        if(n%g!=0)
        return 0;
        vector<int> vis(n,0);
        sort(h.begin(),h.end());
        int cnt = 0 , prev;
        for(int i = 0 ; i<n/g ; i++)
        {
            cnt = 0 , prev = -1;
            for(int j = 0 ; j<n && cnt<g; j++)
            {
                if(vis[j]==0 && cnt==0)
                {
                    prev = h[j];
                    cnt++;
                    vis[j] = 1;
                }
                else if(vis[j]==0 && h[j]-prev==1)
                {
                    cnt++;
                    prev = h[j];
                    vis[j] = 1;
                }
                
            }
            if(cnt!=g) return 0;
        }
        return 1;
    }
};