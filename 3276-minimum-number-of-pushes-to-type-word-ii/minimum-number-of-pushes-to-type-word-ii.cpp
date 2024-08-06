class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> m;
        for(auto x : word)
        m[x]++;
        int ans = 0 ;
        priority_queue<pair<int,char>> pq;
        for(auto x : m)
        pq.push({x.second,x.first});
        int c  = 2, n = 1 ;
        while(!pq.empty())
        {
            int x = pq.top().first;
            if(c>9)
            {
                c = 2;
                n++;
            }
            ans += (x*n);
            c++;
            pq.pop();
        }
        return ans;
    }

};