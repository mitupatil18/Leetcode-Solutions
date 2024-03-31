class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        map<char,int> m;
        for(auto x : s)
        m[x]++;
        for(auto x : m)
        {
            pq.push({x.second,x.first});
        }
        string z;
        while(!pq.empty())
        {
            int a  = pq.top().first;
            char c = pq.top().second;
            pq.pop();
            while(a)
            {
                z.push_back(c);
                a--;
            }
        }
        return z;
    }
};