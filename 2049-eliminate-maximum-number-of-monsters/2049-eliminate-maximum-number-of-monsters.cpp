class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int> t ;
        int x , n= dist.size();
        for(int i = 0 ; i<n ; i++)
        {
            if(dist[i]%speed[i]==0)
            x = dist[i]/speed[i] ;
            else
            x = dist[i]/speed[i]+1 ;
            t.push_back(x) ;
        }
        sort(t.begin(),t.end());
        int cnt = 0 ;
        for(int i = 1 ; i<n ; i++)
        {
            if(t[i]>i)
            cnt++ ;
            else
            break;
        }
        return cnt+1 ;
    }
};